# Library name 
NAME = libft.a

# Compiler and compilation options
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Sources
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c get_next_line_bonus.c \
	get_next_line_utils.c get_next_line_utils_bonus.c ft_estructure.c \
	ft_puthex_lower.c ft_putnbr_u.c ft_printf.c	ft_puthex_nil.c	ft_putstr_printf.c \
	ft_putchar_percent.c ft_puthex_upper.c ft_putchar_printf.c ft_putnbr_printf.c\


SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			ft_lstmap.c\

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
