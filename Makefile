# Library name 
NAME = libft.a

# Compiler and compilation options
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Sources
SRCS = src/d_ascii/ft_isalpha.c src/d_ascii/ft_isdigit.c src/d_ascii/ft_isalnum.c src/d_ascii/ft_isascii.c src/d_ascii/ft_isprint.c src/d_ascii/ft_toupper.c src/d_ascii/ft_tolower.c\
	src/d_memory/ft_calloc.c src/d_memory/ft_memset.c src/d_memory/ft_bzero.c src/d_memory/ft_memcpy.c src/d_memory/ft_memmove.c src/d_memory/ft_memchr.c src/d_memory/ft_memcmp.c\
	src/d_strings/ft_strlen.c src/d_strings/ft_strlcpy.c src/d_strings/ft_strlcat.c  src/d_strings/ft_strchr.c src/d_strings/ft_strrchr.c src/d_strings/ft_strncmp.c src/d_strings/ft_strnstr.c src/d_strings/ft_strmapi.c src/d_strings/ft_striteri.c src/d_strings/ft_strdup.c src/d_strings/ft_substr.c src/d_strings/ft_strjoin.c src/d_strings/ft_strtrim.c\
	src/ft_split.c src/ft_atoi.c src/ft_itoa.c  src/ft_printf.c\
	src/d_fds/ft_putchar_fd.c src/d_fds/ft_putstr_fd.c src/d_fds/ft_putendl_fd.c src/d_fds/ft_putnbr_fd.c\
	src/d_get_next_line/get_next_line_utils.c src/d_get_next_line/get_next_line_utils_bonus.c src/d_get_next_line/get_next_line.c src/d_get_next_line/get_next_line_bonus.c\
	src/d_printf/ft_puthex_lower.c src/d_printf/ft_putnbr_u.c src/d_printf/ft_puthex_nil.c src/d_printf/ft_putstr_printf.c src/d_printf/ft_putchar_percent.c src/d_printf/ft_puthex_upper.c src/d_printf/ft_putchar_printf.c src/d_printf/ft_putnbr_printf.c\


SRCS_BONUS = src/d_lists/ft_lstnew.c src/d_lists/ft_lstadd_front.c src/d_lists/ft_lstsize.c src/d_lists/ft_lstlast.c\
			src/d_lists/ft_lstadd_back.c src/d_lists/ft_lstdelone.c src/d_lists/ft_lstclear.c src/d_lists/ft_lstiter.c\
			src/d_lists/ft_lstmap.c\

# Header
HEADER = libft.h

# Objects generated during compilation
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# Default rule for compiling the library
all: $(NAME)

# Rule to compile your main project and link it with libft
$(NAME): $(OBJS) $(HEADER) $(OBJS_BONUS) 
	ar rcs $(NAME) $(OBJS) $(HEADER) $(OBJS_BONUS) 

bonus: $(OBJS_BONUS) $(HEADER)
	ar rcs $(NAME) $(OBJS_BONUS) $(HEADER)

# Rule to compile each source file into an object
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to remove generated objects
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

# Rule to remove the library 
fclean: clean
	rm -f $(NAME)

# Rule to rebuild the project from scratch
re: fclean all

# Rule to unsderstand that those words are comands
.PHONY: clean fclean all re bonus
