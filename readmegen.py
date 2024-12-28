from bs4 import BeautifulSoup

# Ruta al archivo HTML generado por Doxygen
html_file = "index.html"
output_md = "README.md"

try:
    # Abrir y cargar el archivo HTML
    with open(html_file, "r") as file:
        soup = BeautifulSoup(file, "html.parser")
    
    # Extraer título del proyecto
    project_title = soup.title.string if soup.title else "Documentación del Proyecto"
    
    # Extraer resumen del proyecto
    brief = soup.find("div", {"class": "projectbrief"})
    brief_text = brief.get_text(strip=True) if brief else "Resumen no disponible."

    # Extraer lista de funciones
    functions_section = soup.find("div", {"id": "func"})
    functions = functions_section.find_all("div", {"class": "memitem"}) if functions_section else []

    # Crear contenido para README.md
    with open(output_md, "w") as readme:
        readme.write(f"# {project_title}\n\n")
        readme.write(f"## Resumen\n\n{brief_text}\n\n")
        readme.write("## Funciones Documentadas\n\n")

        if functions:
            for func in functions:
                func_name = func.find("a").string
                func_desc = func.find("div", {"class": "memdoc"}).get_text(strip=True)
                readme.write(f"- **{func_name}**: {func_desc}\n")
        else:
            readme.write("No se encontraron funciones documentadas.\n")

    print(f"README.md generado correctamente en {output_md}.")

except FileNotFoundError:
    print(f"No se encontró el archivo {html_file}. Asegúrate de que Doxygen generó correctamente la documentación.")
except Exception as e:
    print(f"Se produjo un error: {e}")

