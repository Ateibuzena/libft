# Libft
## Your First Library

**Summary:** This project consists of programming a library in C.

Your library will have a bunch of general-purpose functions.

# Table of Contents

I. [Introduction](#introduction) 2
II. [General Instructions](#general-instructions) 3
III. [Mandatory Part](#mandatory-part) 5
   III.1. [Technical Considerations](#technical-considerations) 5
   III.2. [Part 1 - Libc Functions](#part-1-libc-functions) 6
   III.3. [Part 2 - Additional Functions](#part-2-additional-functions) 7
IV. [Bonus Part](#bonus-part) 12

# Chapter I
## Introduction

Programming in C can be boring when you don't have access to the most commonly used functions. This project will allow you to understand how these functions work, how to implement them, and how to use them. You will create your own library, which will be very useful.

# Chapter II
## General Instructions

### isalpha

- **Description:** Checks if a character is an alphabetic letter.
- **Returns:** 1 if the character is an alphabetic letter, 0 otherwise.
- **Call:** `int result = isalpha(character);`
- **Receives:** A character (`int`), usually represented by its ASCII value.
- **Function:** Verifies if the character is within the range of alphabetic letters, i.e., 'a' to 'z' or 'A' to 'Z'.

### isdigit

- **Description:** Checks if a character is a decimal digit.
- **Returns:** 1 if the character is a decimal digit, 0 otherwise.
- **Call:** `int result = isdigit(character);`
- **Receives:** A character (`int`), usually represented by its ASCII value.
- **Function:** Verifies if the character is within the range of decimal digits, i.e., '0' to '9'.

### isalnum

- **Description:** Checks if a character is alphanumeric (letter or digit).
- **Returns:** 1 if the character is alphanumeric, 0 otherwise.
- **Call:** `int result = isalnum(character);`
- **Receives:** A character (`int`), usually represented by its ASCII value.

### isascii

- **Description:** Checks if a character is a valid ASCII value.
- **Returns:** 1 if the character is a valid ASCII value (between 0 and 127), 0 otherwise.
- **Call:** `int result = isascii(character);`
- **Receives:** A character (`int`), usually represented by its ASCII value.
- **Function:** Verifies if the character is within the range of valid ASCII values, i.e., between 0 and 127.

### isprint

- **Description:** Checks if a character is a printable character (including whitespace).
- **Returns:** 1 if the character is printable, 0 otherwise.
- **Call:** `int result = isprint(character);`
- **Receives:** A character (`int`), usually represented by its ASCII value.
- **Function:** Verifies if the character is printable, i.e., if it is a visible character on the screen including letters, digits, punctuation marks, and whitespace.

### strlen

- **Description:** Calculates the length of a string of characters.
- **Returns:** The number of characters in the string, excluding the null-termination character.
- **Call:** `size_t length = strlen(string);`
- **Receives:** A string of characters (`char *`).

### memset

- **Description:** Fills a block of memory with a specific value.
- **Returns:** A pointer to the modified memory block.
- **Call:** `void *result = memset(destination, value, size);`
- **Receives:** A pointer to the start of the memory block (`void *`), the value to write (`int` or `char`), and the number of bytes to fill (`size_t`).

### bzero

- **Description:** Sets the first n bytes of a memory block to zero.
- **Returns:** None.
- **Call:** `bzero(destination, size);`
- **Receives:** A pointer to the start of the memory block (`void *`) and the number of bytes to set to zero (`size_t`).

### memcpy

- **Description:** Copies a block of memory from one location to another.
- **Returns:** A pointer to the destination.
- **Call:** `void *result = memcpy(destination, source, size);`
- **Receives:** A pointer to the destination (`void *`), a pointer to the source (`const void *`), and the number of bytes to copy (`size_t`).

### memmove

- **Description:** Copies a block of memory from one location to another, handling overlap correctly.
- **Returns:** A pointer to the destination.
- **Call:** `void *result = memmove(destination, source, size);`
- **Receives:** A pointer to the destination (`void *`), a pointer to the source (`const void *`), and the number of bytes to copy (`size_t`).

### strlcpy

- **Description:** Copies a truncated string of characters to a specific size.
- **Returns:** The size of the truncated string.
- **Call:** `size_t length = strlcpy(destination, source, destination_size);`
- **Receives:** A pointer to the destination (`char *`), a pointer to the source (`const char *`), and the maximum size of the destination (`size_t`).

### strlcat

- **Description:** Concatenates a string of characters to another string truncated to a specific size.
- **Returns:** The size of the resulting string.
- **Call:** `size_t length = strlcat(destination, source, destination_size);`
- **Receives:** A pointer to the destination (`char *`), a pointer to the source (`const char *`), and the maximum size of the destination (`size_t`).

### toupper

- **Description:** Converts a lowercase character to uppercase.
- **Returns:** The converted character.
- **Call:** `int result = toupper(character);`
- **Receives:** A character (`int`), usually represented by its ASCII value.

### tolower

- **Description:** Converts an uppercase character to lowercase.
- **Returns:** The converted character.
- **Call:** `int result = tolower(character);`
- **Receives:** A character (`int`), usually represented by its ASCII value.

### strchr

- **Description:** Finds the first occurrence of a character in a string of characters.
- **Returns:** A pointer to the first found character or NULL if the character is not found.
- **Call:** `char *result = strchr(string, character);`
- **Receives:** A string of characters (`char *`) and a character (`int`), usually represented by its ASCII value.

### strrchr

- **Description:** Finds the last occurrence of a character in a string of characters.
- **Returns:** A pointer to the last found character or NULL if the character is not found.
- **Call:** `char *result = strrchr(string, character);`
- **Receives:** A string of characters (`char *`) and a character (`int`), usually represented by its ASCII value.

### strncmp

- **Description:** Compares the first n characters of two strings of characters.
- **Returns:** An integer value less than, equal to, or greater than zero if the first string is less than, equal to, or greater than the second string.
- **Call:** `int result = strncmp(string1, string2, n);`
- **Receives:** Two strings of characters (`char *`) and the number of characters to compare (`size_t`).

### memchr

- **Description:** Finds the first occurrence of a byte in a block of memory.
- **Returns:** A pointer to the position of the found byte or NULL if the byte is not found.
- **Call:** `void *result = memchr(block, value, size);`
- **Receives:** A pointer to the start of the memory block (`void *`), the value to search for (`int` or `char`), and the number of bytes to search (`size_t`).

### memcmp

- **Description:** Compares two blocks of memory byte by byte.
- **Returns:** An integer value less than, equal to, or greater than zero if the first block is less than, equal to, or greater than the second block.
- **Call:** `int result = memcmp(block1, block2, size);`
- **Receives:** Two pointers to the memory blocks to compare (`const void *`), and the number of bytes to compare (`size_t`).

### strnstr

- **Description:** Finds the first occurrence of a substring in a string of characters, limiting the search to a maximum number of characters.
- **Returns:** A pointer to the start of the found substring or NULL if the substring is not found.
- **Call:** `char *result = strnstr(string, substring, max_size);`
- **Receives:** A string of characters (`char *`), a substring (`char *`), and the maximum number of characters to search (`size_t`).

### atoi

- **Description:** Converts a string of characters to an integer value.
- **Returns:** The obtained integer value.
- **Call:** `int result = atoi(string);`
- **Receives:** A string of characters (`const char *`).

### calloc

- **Description:** Allocates memory for an array of elements, initializing them to zero.
- **Returns:** A pointer to the allocated memory block.
- **Call:** `void *result = calloc(num_elements, element_size);`
- **Receives:** The number

### Chapter III
#### Mandatory Part

- **Program Name:** libft.a
- **Files to Submit:** Makefile, libft.h, ft_*.c
- **Makefile Directives:** NAME, all, clean, fclean, re
- **Authorized Functions:** Details below
- **Allowed to Use:** libft (but you don't have it yet)
- **Description:** Write your own library: a set of functions that will be a very useful tool throughout the course.

#### III.1. Technical Considerations
- Declaring global variables is prohibited.
- If you need to separate a complex function into several, make sure to use the keyword static for that. This way, the functions will stay in the appropriate file.
- Put all your files in the root of your repository.
- It is prohibited to submit unused files.
- All .c files must be compiled with the flags -Wall -Werror -Wextra.
- You must use the ar command to generate the library. The use of libtool is prohibited.
- Your libft.a must be created in the root of the repository.

### III.2. Part 1 - Libc Functions

To start, you will need to redo some functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the original functions. They should be exactly as described in the man pages. The only difference will be the naming convention. They will start with the prefix "ft_". For example, strlen will become ft_strlen.

Some functions in their prototypes have the word "restrict". This word is part of the c99 standard. Therefore, it is prohibited to include it in your own prototypes, as well as compiling your code with the flag -std=c99.

You will need to write your own functions implementing the following original functions. They do not require authorized functions:

- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi

To implement these other two functions, you will have to use malloc():

- calloc
- strdup

### III.3. Part 2 - Additional Functions

In this second part, you will need to develop a set of functions that are either not from the libc library or are but in a different way. Some of the following functions may be useful for creating the functions in part 1.

#### Function Name: ft_substr

- **Prototype:** `char *ft_substr(char const *s, unsigned int start, size_t len);`
- **Parameters:**
  - `s`: The string from which to create the substring.
  - `start`: The index of the character in 's' to start the substring.
  - `len`: The maximum length of the substring.
- **Return Value:** 
  - The resulting substring.
  - NULL if memory allocation fails.
- **Authorized Functions:** malloc
- **Description:** Allocates (with malloc(3)) and returns a substring of the string 's'. The substring begins at index 'start' and has a maximum length of 'len'.

#### Function Name: ft_strjoin

- **Prototype:** `char *ft_strjoin(char const *s1, char const *s2);`
- **Parameters:**
  - `s1`: The first string.
  - `s2`: The string to append to 's1'.
- **Return Value:** 
  - The new string.
  - NULL if memory allocation fails.
- **Authorized Functions:** malloc
- **Description:** Allocates (with malloc(3)) and returns a new string, formed by the concatenation of 's1' and 's2'.

#### Function Name: ft_strtrim

- **Prototype:** `char *ft_strtrim(char const *s1, char const *set);`
- **Files to Submit:** -
- **Parameters:**
  - `s1`: The string to be trimmed.
  - `set`: The characters to remove from the string.
- **Return Value:** 
  - The trimmed string.
  - NULL if memory allocation fails.
- **Authorized Functions:** malloc
- **Description:** Removes all characters from the string 'set' from the beginning and end of 's1', until a character not belonging to 'set' is found. The resulting string is returned with a malloc(3) allocation.

#### Function Name: ft_split

- **Prototype:** `char **ft_split(char const *s, char c);`
- **Files to Submit:** -
- **Parameters:**
  - `s`: The string to split.
  - `c`: The delimiter character.
- **Return Value:** 
  - The array of new strings resulting from the split.
  - NULL if memory allocation fails.
- **Authorized Functions:** malloc, free
- **Description:** Allocates (using malloc(3)) an array of strings resulting from splitting the string 's' into substrings using the character 'c' as a delimiter. The array must end with a NULL pointer.

#### Function Name: ft_itoa

- **Prototype:** `char *ft_itoa(int n);`
- **Files to Submit:** -
- **Parameters:**
  - `n`: The integer to convert.
- **Return Value:** 
  - The string representing the number.
  - NULL if memory allocation fails.
- **Authorized Functions:** malloc
- **Description:** Using malloc(3), generates a string representing the integer value received as an argument. Negative numbers must be handled.

#### Function Name: ft_strmapi

- **Prototype:** `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- **Files to Submit:** -
- **Parameters:**
  - `s`: The string to iterate over.
  - `f`: The function to apply to each character.
- **Return Value:** 
  - The string created after the correct use of 'f' on each character.
  - NULL if memory allocation fails.
- **Authorized Functions:** malloc
- **Description:** Applies the function 'f' to each character of the string 's', passing as parameters the index of each character within 's' and the character itself. Generates a new string with the result of the successive use of 'f'.

#### Function Name: ft_striteri

- **Prototype:** `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
- **Files to Submit:** -
- **Parameters:**
  - `s`: The string to iterate over.
  - `f`: The function to apply to each character.
- **Return Value:** None
- **Authorized Functions:** None
- **Description:** Applies the function 'f' to each character of the string 's', passing as parameters the index of each character within 's' and the address of the character itself, which can be modified if necessary.

#### Function Name: ft_putchar_fd

- **Prototype:** `void ft_putchar_fd(char c, int fd);`
- **Files to Submit:** -
- **Parameters:**
  - `c`: The character to send.
  - `fd`: The file descriptor to write to.
- **Return Value:** None
- **Authorized Functions:** write
- **Description:** Sends the character 'c' to the specified file descriptor.

#### Function Name: ft_putstr_fd

- **Prototype:** `void ft_putstr_fd(char *s, int fd);`
- **Files to Submit:** -
- **Parameters:**
  - `s`: The string to send.
  - `fd`: The file descriptor to write to.
- **Return Value:** None
- **Authorized Functions:** write
- **Description:** Sends the string 's' to the specified file descriptor.

#### Function Name: ft_putendl_fd

- **Prototype:** `void ft_putendl_fd(char *s, int fd);`
- **Files to Submit:** -
- **Parameters:**
  - `s`: The string to send.
  - `fd`: The file descriptor to write to.
- **Return Value:** None
- **Authorized Functions:** write
- **Description:** Sends the string 's' to the given file descriptor, followed by a newline.

#### Function Name: ft_putnbr_fd

- **Prototype:** `void ft_putnbr_fd(int n, int fd);`
- **Files to Submit:** -
- **Parameters:**
  - `n`: The number to send.
  - `fd`: The file descriptor to write to.
- **Return Value:** None
- **Authorized Functions:** write
- **Description:** Sends the number 'n' to the given file descriptor.

### Chapter IV
#### Bonus Part

If you complete the mandatory part, don't hesitate to take it further by doing this extra part. You will earn extra points if you complete it correctly.

Functions for manipulating memory and strings are very useful... But soon you will discover that manipulating lists is even more so.

You will need to use the following structure to represent a node of your list. Add the declaration to your libft.h file:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

The members of the `t_list` structure are:

- `content`: the information contained by the node.
  - `void *`: allows storing any type of information.
- `next`: the address of the next node, or NULL if the next node is the last one.

In your Makefile, add a rule `make bonus` that incorporates the bonus functions into your libft.a.

#### Function Name: ft_lstnew

- **Prototype:** `t_list *ft_lstnew(void *content);`
- **Files to Submit:** -
- **Parameters:**
  - `content`: the content with which to create the node.
- **Return Value:** The new node
- **Authorized Functions:** malloc
- **Description:** Creates a new node using malloc(3). The member variable 'content' is initialized with the content of the 'content' parameter. The 'next' variable is initialized with NULL.

#### Function Name: ft_lstadd_front

- **Prototype:** `void ft_lstadd_front(t_list **lst, t_list *new);`
- **Files to Submit:** -
- **Parameters:**
  - `lst`: the address of a pointer to the first node of a list.
  - `new`: a pointer to the node to add at the beginning of the list.
- **Return Value:** None
- **Authorized Functions:** None
- **Description:** Adds the 'new' node to the beginning of the 'lst' list.

#### Function Name: ft_lstsize

- **Prototype:** `int ft_lstsize(t_list *lst);`
- **Files to Submit:** -
- **Parameters:**
  - `lst`: the start of the list.
- **Return Value:** The length of the list.
- **Authorized Functions:** None
- **Description:** Counts the number of nodes in a list.

#### Function Name: ft_lstlast

- **Prototype:** `t_list *ft_lstlast(t_list *lst);`
- **Files to Submit:** -
- **Parameters:**
  - `lst`: the start of the list.
- **Return Value:** The last node of the list.
- **Authorized Functions:** None
- **Description:** Returns the last node of the list.

#### Function Name: ft_lstadd_back

- **Prototype:** `void ft_lstadd_back(t_list **lst, t_list *new);`
- **Files to Submit:** -
- **Parameters:**
  - `lst`: a pointer to the first node of a list.
  - `new`: a pointer to a node to add to the list.
- **Return Value:** None
- **Authorized Functions:** None
- **Description:** Adds the 'new' node to the end of the 'lst' list.

#### Function Name: ft_lstdelone

- **Prototype:** `void ft_lstdelone(t_list *lst, void (*del)(void *));`
- **Files to Submit:** -
- **Parameters:**
  - `lst`: the node to free.
  - `del`: a pointer to the function used to free the content of the node.
- **Return Value:** None
- **Authorized Functions:** free
- **Description:** Takes a node 'lst' as a parameter and frees the memory of the content using the 'del' function given as a parameter, in addition to freeing the node. The memory of 'next' should not be freed.

#### Function Name: ft_lstmap

- **Prototype:** `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
- **Files to Submit:** -
- **Parameters:**
  - `lst`: a pointer to a node.
  - `f`: the address of a pointer to a function used to iterate over each element of the list.
  - `del`: a function pointer used to delete the content of a node, if necessary.
- **Return Value:** The new list.
  - NULL if memory allocation fails.
- **Authorized Functions:** malloc, free
- **Description:** Iterates over the list 'lst' and applies the function 'f' to the content of each node. Creates a resulting list from the correct and successive application of the 'f' function to each node. The 'del' function is used to delete the content of a node, if necessary.

# Ana Zubieta
