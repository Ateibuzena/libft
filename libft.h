/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:13:53 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/02 21:24:27 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This header file contains declarations for various 
// functions and types defined in the "libft" library.
#ifndef LIBFT_H
# define LIBFT_H

// Definition of type t_size if not defined
# ifndef T_SIZE
#  define T_SIZE

typedef unsigned int	t_size;

# endif

# ifndef COUNTERS
#  define COUNTERS

typedef struct Counters
{
	t_size	i;
	t_size	sign;
	t_size	n;
	t_size	words;
}	t_Counters;

# endif

# ifndef POINTERS
#  define POINTERS

typedef struct Pointers
{
	char		**ptr;
	char		*temp;
}	t_Pointers;

# endif

# ifndef ITOA
#  define ITOA

typedef struct Itoa
{
	long	i;
	char	*ptr;
	char	*temp;
	int		index;
}	t_Itoa;

# endif

// Function declarations
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
t_size			ft_strlen(const char *s);
void			*ft_memset(void *array, int value, t_size len);
void			ft_bzero(void *array, t_size len);
void			*ft_memcpy(void *dst, const void *src, t_size n);
void			*ft_memmove(void *dst, const void *src, t_size len);
t_size			ft_strlcpy(char *dst, const char *src, t_size dstsize);
t_size			ft_strlcat(char *dst, const char *src, t_size dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *s1, const char *s2, t_size n);
void			*ft_memchr(const void *s, int c, t_size n);
int				ft_memcmp(const void *s1, const void *s2, t_size n);
char			*ft_strnstr(const char *hay, const char *need, t_size len);
int				ft_atoi(const char *str);
t_Counters		ft_structure(t_size one, t_size two, t_size three, t_size four);
t_Counters		ft_spacesymbols(const char *str, t_Counters *sign_index);
void			*ft_calloc(t_size count, t_size size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, t_size len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
t_size			ft_wordscount(char const *s, char c);
char			**ft_nullcase_split(char **pointer);
void			ft_freedoble(char **ptr);
char			**ft_nullcase_split(char **pointer);
char			*ft_itoa(int n);
int				ft_digitcount(int n);
char			ft_f(unsigned int n, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

// End of LIBFT_H
#endif
