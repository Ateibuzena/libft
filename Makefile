# Library name 
NAME = libft.a

# Compiler and compilation options
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Sources
SRCS = $(wildcard ft_*.c)

# Header
HEADER = libft.h

# Objects generated during compilation
OBJS = $(SRCS:.c=.o)

# Default rule for compiling the library
all: $(NAME)

# Rule to compile your main project and link it with libft
$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS) $(HEADER)

# Norminette
norme:
	@norminette .

# Rule to compile each source file into an object
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to remove generated objects
clean:
	rm -f $(OBJS)

# Rule to remove the library 
fclean: clean
	rm -f $(NAME)

# Rule to rebuild the project from scratch
re: fclean all

# Rule to unsderstand that those words are comands
.PHONY: clean fclean all re norme
