#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

void	ft_freedouble(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}