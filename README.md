# Libft
## Your First Library

**Summary:** This project consists of programming a library in C.

Your library will have a bunch of general-purpose functions.

# Table of Contents

I. [Introduction](#introduction)
II. [General Instructions](#general-instructions)
III. [Mandatory Part](#mandatory-part)
   III.1. [Technical Considerations](#technical-considerations)
   III.2. [Part 1 - Libc Functions](#part-1-libc-functions)
   III.3. [Part 2 - Additional Functions](#part-2-additional-functions)
IV. [Bonus Part](#bonus-part)
V. [Detailed explanation of the functions](#detailed-explanation-of-the-functions)

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

### Chapter V

## Explanation of `ft_isalpha` function

This function checks whether a character `c` is an alphabetic character (a-z or A-Z). Here's a breakdown of what each part of the function does:

1. **`if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))`**: Checks if the ASCII value of `c` corresponds to an uppercase letter (between 65 and 90) or a lowercase letter (between 97 and 122). 

2. **`return (1);`**: If the condition in the `if` statement is true, meaning `c` is an alphabetic character, the function returns `1`, indicating true.

3. **`return (0);`**: If the condition in the `if` statement is false, meaning `c` is not an alphabetic character, the function returns `0`, indicating false.

In summary, this function determines whether a character `c` is an alphabetic character (a-z or A-Z) and returns `1` if it is, or `0` otherwise.

## Explanation of `ft_isdigit` function

This function checks whether a character `c` is a digit character (0-9). Here's a breakdown of what each part of the function does:

1. **`if (c >= 48 && c <= 57)`**: Checks if the ASCII value of `c` corresponds to a digit character (between 48 and 57).

2. **`return (1);`**: If the condition in the `if` statement is true, meaning `c` is a digit character, the function returns `1`, indicating true.

3. **`return (0);`**: If the condition in the `if` statement is false, meaning `c` is not a digit character, the function returns `0`, indicating false.

In summary, this function determines whether a character `c` is a digit character (0-9) and returns `1` if it is, or `0` otherwise.

## Explanation of `ft_isalnum` function

This function checks whether a character `c` is an alphanumeric character (a-z, A-Z, or 0-9). Here's a breakdown of what each part of the function does:

1. **`if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)`**: Calls the functions `ft_isalpha` and `ft_isdigit` to check if `c` is either an alphabetic character or a digit character.

2. **`return (1);`**: If either `ft_isalpha(c)` or `ft_isdigit(c)` returns a non-zero value (indicating that `c` is an alphabetic or digit character), the function returns `1`, indicating true.

3. **`return (0);`**: If both `ft_isalpha(c)` and `ft_isdigit(c)` return `0` (indicating that `c` is neither an alphabetic nor a digit character), the function returns `0`, indicating false.

In summary, this function determines whether a character `c` is an alphanumeric character (a-z, A-Z, or 0-9) and returns `1` if it is, or `0` otherwise.

## Explanation of `ft_isascii` function

This function, `ft_isascii`, checks whether a character `c` is a valid ASCII character. It returns `1` if `c` is a valid ASCII character (with an ASCII value between 0 and 127), otherwise it returns `0`.

Here's a breakdown of what each part of the function does:

1. **`if (c >= 0 && c <= 127)`**: This condition checks if the ASCII value of `c` falls within the range of valid ASCII characters, which is between 0 and 127 inclusive.

2. **`return (1);`**: If the condition in the `if` statement is true, meaning `c` is a valid ASCII character, the function returns `1`, indicating true.

3. **`return (0);`**: If the condition in the `if` statement is false, meaning `c` is not a valid ASCII character, the function returns `0`, indicating false.

In summary, this function determines whether a character `c` is a valid ASCII character and returns `1` if it is, or `0` otherwise.

## Explanation of `ft_isprint` function

This function, `ft_isprint`, checks whether a character `c` is a printable character. It returns `1` if `c` is a printable character (with an ASCII value between 32 and 126 inclusive), otherwise it returns `0`.

Here's a breakdown of what each part of the function does:

1. **`if (ft_isascii(c) != 0)`**: This condition checks if `c` is a valid ASCII character using the `ft_isascii` function. If `c` is not a valid ASCII character, the function returns `0`.

2. **`if (c >= 32 && c <= 126)`**: This nested condition checks if `c` falls within the range of printable ASCII characters, which is between 32 and 126 inclusive.

3. **`return (1);`**: If both conditions are true, meaning `c` is a valid ASCII character and falls within the range of printable characters, the function returns `1`, indicating true.

4. **`return (0);`**: If either of the conditions is false, meaning `c` is not a valid ASCII character or does not fall within the range of printable characters, the function returns `0`, indicating false.

In summary, this function determines whether a character `c` is a printable character and returns `1` if it is, or `0` otherwise.

## Explanation of `ft_strlen` function

This function, `ft_strlen`, calculates the length of a null-terminated string `s`. It iterates through the characters of the string until it encounters the null terminator `'\0'`, and counts the number of characters encountered.

Here's a breakdown of what each part of the function does:

1. **`int i;`**: Declares an integer variable `i` to use as an index for iterating through the characters of the string.

2. **`i = 0;`**: Initializes the index variable `i` to 0 before starting the iteration.

3. **`while (s[i] != '\0')`**: This loop iterates through the characters of the string `s` until it encounters the null terminator `'\0'`.

4. **`i++;`**: Inside the loop, increments the index variable `i` to move to the next character in the string.

5. **`return (i);`**: After the loop finishes, the function returns the final value of `i`, which represents the length of the string `s` (excluding the null terminator).

In summary, this function calculates the length of a null-terminated string `s` by iterating through its characters until it reaches the null terminator, and returns the count of characters encountered.

## Explanation of `ft_memset` function

This function, `ft_memset`, sets each byte of a memory block `array` to the specified `value`. It iterates through the memory block and assigns the `value` to each byte until the specified `len` is reached.

Here's a breakdown of what each part of the function does:

1. **`t_size i;`**: Declares a variable `i` of type `t_size` to use as an index for iterating through the memory block.

2. **`unsigned char *ptr;`**: Declares a pointer `ptr` of type `unsigned char *` to point to the memory block `array`. Using an unsigned char pointer allows for byte-wise manipulation of the memory block.

3. **`ptr = (unsigned char *)array;`**: Assigns the starting address of the memory block `array` to the pointer `ptr`. Casting `array` to an `unsigned char *` ensures that byte-wise operations can be performed on the memory block.

4. **`i = 0;`**: Initializes the index variable `i` to 0 before starting the iteration.

5. **`while (i < len)`**: This loop iterates through the memory block until the specified length `len` is reached.

6. **`*ptr = (unsigned char)value;`**: Sets the value of the byte pointed to by `ptr` to the specified `value`. Since `value` is of type `int`, it is cast to `unsigned char` to ensure that only the least significant byte is assigned to the memory block.

7. **`i++;`**: Increments the index variable `i` to move to the next byte in the memory block.

8. **`ptr++;`**: Increments the pointer `ptr` to point to the next byte in the memory block.

9. **`return (array);`**: After setting each byte in the memory block, the function returns a pointer to the modified memory block `array`.

In summary, this function sets each byte of a memory block `array` to the specified `value` by iterating through the memory block and assigning the `value` to each byte until the specified `len` is reached.

## Explanation of `ft_bzero` function

This function, `ft_bzero`, sets the first `len` bytes of the memory block pointed to by `array` to zero. It achieves this by calling the `ft_memset` function with the specified `array`, `value` of 0, and `len`.

Here's a breakdown of what each part of the function does:

1. **`ft_memset(array, 0, len);`**: Calls the `ft_memset` function to set the first `len` bytes of the memory block pointed to by `array` to zero. The `ft_memset` function is responsible for performing the byte-wise zeroing operation.

In summary, this function serves as a wrapper for the `ft_memset` function, specifically designed to zero out a memory block by setting its bytes to zero.

## Explanation of `ft_memcpy` function

This function, `ft_memcpy`, copies `n` bytes from the memory area pointed to by `src` to the memory area pointed to by `dst`. It performs the byte-wise copy operation by iterating through the memory areas and copying each byte from `src` to `dst`.

Here's a breakdown of what each part of the function does:

1. **`t_size i;`**: Declares a variable `i` of type `t_size` to use as an index for iterating through the memory areas.

2. **`unsigned char *pdst;`**: Declares a pointer `pdst` of type `unsigned char *` to point to the destination memory area `dst`. Using an unsigned char pointer allows for byte-wise manipulation of the memory areas.

3. **`const unsigned char *psrc;`**: Declares a pointer `psrc` of type `const unsigned char *` to point to the source memory area `src`. Using a const unsigned char pointer ensures that the source memory area is treated as read-only.

4. **`pdst = (unsigned char *)dst;`**: Assigns the starting address of the destination memory area `dst` to the pointer `pdst`. Casting `dst` to an `unsigned char *` ensures that byte-wise operations can be performed on the destination memory area.

5. **`psrc = (const unsigned char *)src;`**: Assigns the starting address of the source memory area `src` to the pointer `psrc`. Casting `src` to a `const unsigned char *` ensures that byte-wise operations can be performed on the source memory area, while also enforcing read-only access.

6. **`if (pdst == 0 && psrc == 0)`**: Checks if both the destination and source pointers are null. If either pointer is null, indicating a null pointer was passed as an argument, the function returns null.

7. **`while (i < n)`**: This loop iterates through the memory areas until the specified number of bytes `n` is reached.

8. **`pdst[i] = psrc[i];`**: Copies the byte from the source memory area `psrc` at index `i` to the destination memory area `pdst` at index `i`.

9. **`i++;`**: Increments the index variable `i` to move to the next byte in the memory areas.

10. **`return (dst);`**: After copying `n` bytes from the source to the destination memory area, the function returns a pointer to the destination memory area `dst`.

In summary, this function copies `n` bytes from the memory area pointed to by `src` to the memory area pointed to by `dst` by performing a byte-wise copy operation.

## Explanation of `ft_memmove` function

This function, `ft_memmove`, copies `len` bytes from the memory area pointed to by `src` to the memory area pointed to by `dst`. Unlike `ft_memcpy`, `ft_memmove` can handle overlapping memory areas correctly by copying the bytes in the correct order.

Here's a breakdown of what each part of the function does:

1. **`unsigned char *pdst;` and `unsigned char *psrc;`**: Declare pointers `pdst` and `psrc` of type `unsigned char *` to point to the destination and source memory areas `dst` and `src` respectively. Using unsigned char pointers allows for byte-wise manipulation of the memory areas.

2. **`pdst = (unsigned char *)dst;` and `psrc = (unsigned char *)src;`**: Assign the starting addresses of the destination and source memory areas `dst` and `src` respectively to the pointers `pdst` and `psrc`. Casting `dst` and `src` to `unsigned char *` ensures that byte-wise operations can be performed on the memory areas.

3. **`if (pdst == 0 && psrc == 0)`**: Check if both the destination and source pointers are null. If either pointer is null, indicating a null pointer was passed as an argument, the function returns null.

4. **`if (pdst > psrc)`**: Check if the destination pointer `pdst` is greater than the source pointer `psrc`. If so, it means that the memory areas overlap and the copying operation needs to be performed in reverse order.

   - **`psrc += len;` and `pdst += len;`**: Adjust the source and destination pointers to point to the end of their respective memory areas.

   - **`while (len--)`**: Iterate through the memory areas in reverse order, copying each byte from the source memory area `psrc` to the destination memory area `pdst`.

     - **`*(--pdst) = *(--psrc);`**: Copy the byte pointed to by `psrc` to the byte pointed to by `pdst`, then decrement both pointers to move to the previous byte.

5. **`else if (pdst < psrc)`**: If the destination pointer `pdst` is less than the source pointer `psrc`, it means that the memory areas do not overlap and the copying operation can be performed in forward order.

   - **`while (len--)`**: Iterate through the memory areas in forward order, copying each byte from the source memory area `psrc` to the destination memory area `pdst`.

     - **`*(pdst++) = *(psrc++);`**: Copy the byte pointed to by `psrc` to the byte pointed to by `pdst`, then increment both pointers to move to the next byte.

6. **`return (dst);`**: After copying `len` bytes from the source to the destination memory area, the function returns a pointer to the destination memory area `dst`.

In summary, this function copies `len` bytes from the memory area pointed to by `src` to the memory area pointed to by `dst`, handling overlapping memory areas correctly by copying the bytes in the appropriate order.

## Explanation of `ft_strlcpy` function

This function, `ft_strlcpy`, copies a null-terminated string `src` to the destination string `dst`, while ensuring that no more than `dstsize - 1` bytes are copied to `dst` to ensure null-termination. It returns the length of the source string `src`.

Here's a breakdown of what each part of the function does:

1. **`t_size i;` and `t_size srclen;`**: Declare variables `i` and `srclen` of type `t_size` to use as indices and to store the length of the source string `src` respectively.

2. **`i = 0;`**: Initialize the index variable `i` to 0 before starting the iteration.

3. **`srclen = ft_strlen(src);`**: Calculate the length of the source string `src` using the `ft_strlen` function and store it in the variable `srclen`.

4. **`if (dstsize == 0)`**: Check if `dstsize` is 0. If so, return the length of the source string `src`.

5. **`if (dstsize <= srclen)`**: Check if `dstsize` is less than or equal to the length of the source string `src`. If so, copy at most `dstsize - 1` bytes from `src` to `dst`.

   - **`while (src[i] != '\0' && i < dstsize - 1)`**: Iterate through the characters of the source string `src` until either a null terminator is encountered or `dstsize - 1` characters have been copied. Copy each character from `src` to `dst`.

6. **`else`**: If `dstsize` is greater than the length of the source string `src`, copy the entire source string `src` to `dst`.

   - **`while (src[i] != '\0')`**: Iterate through the characters of the source string `src` until a null terminator is encountered. Copy each character from `src` to `dst`.

7. **`dst[i] = '\0';`**: Ensure that the destination string `dst` is null-terminated by appending a null character at the end.

8. **`return (srclen);`**: Return the length of the source string `src`.

In summary, this function copies a null-terminated string `src` to the destination string `dst`, ensuring that no more than `dstsize - 1` bytes are copied to `dst` to ensure null-termination. It returns the length of the source string `src`.

## Explanation of `ft_strlcat` function

This function, `ft_strlcat`, appends the null-terminated string `src` to the end of the null-terminated string `dst`, while ensuring that no more than `dstsize - dstlen - 1` bytes are appended to `dst` to ensure null-termination. It returns the total length of the concatenated strings `dst` and `src`.

Here's a breakdown of what each part of the function does:

1. **`t_size i;`, `t_size dstlen;`, and `t_size srclen;`**: Declare variables `i`, `dstlen`, and `srclen` of type `t_size` to use as indices and to store the lengths of the destination string `dst` and the source string `src` respectively.

2. **`i = 0;`**: Initialize the index variable `i` to 0 before starting the iteration.

3. **`dstlen = ft_strlen(dst);`** and **`srclen = ft_strlen(src);`**: Calculate the lengths of the destination string `dst` and the source string `src` using the `ft_strlen` function and store them in the variables `dstlen` and `srclen` respectively.

4. **`if (dstlen >= dstsize)`**: Check if the length of the destination string `dst` is greater than or equal to `dstsize`. If so, it means that there is no space left in `dst` to append `src`, so the function returns the sum of `dstsize` and `srclen`.

5. **`while (src[i] != '\0' && i < dstsize - dstlen - 1)`**: Iterate through the characters of the source string `src` until either a null terminator is encountered or the maximum number of bytes that can be appended to `dst` while ensuring null-termination (`dstsize - dstlen - 1`) is reached. Append each character from `src` to `dst`.

6. **`dst[dstlen + i] = '\0';`**: Ensure that the concatenated string `dst` is null-terminated by appending a null character at the end.

7. **`return (dstlen + srclen);`**: Return the total length of the concatenated strings `dst` and `src`.

In summary, this function appends the null-terminated string `src` to the end of the null-terminated string `dst`, while ensuring null-termination and preventing buffer overflow by not appending more than `dstsize - dstlen - 1` bytes to `dst`. It returns the total length of the concatenated strings `dst` and `src`.

## Explanation of `ft_toupper` function

This function, `ft_toupper`, converts a lowercase letter to its corresponding uppercase letter. If the character `c` is a lowercase letter (as determined by `ft_isalpha` function) and its ASCII value falls within the range of lowercase letters (97 to 122), it subtracts 32 from the ASCII value to convert it to its uppercase equivalent.

Here's a breakdown of what each part of the function does:

1. **`if (ft_isalpha(c) == 1 && (c >= 97 && c <= 122))`**: Check if the character `c` is an alphabet character and is a lowercase letter.

   - **`ft_isalpha(c) == 1`**: This condition checks if `c` is an alphabet character using the `ft_isalpha` function.

   - **`(c >= 97 && c <= 122)`**: This condition checks if the ASCII value of `c` falls within the range of lowercase letters.

2. **`return (c - 32);`**: If `c` is a lowercase letter, subtract 32 from its ASCII value to convert it to uppercase, and return the result.

3. **`return (c);`**: If `c` is not a lowercase letter, simply return `c` unchanged.

In summary, this function converts a lowercase letter to its corresponding uppercase letter by subtracting 32 from its ASCII value. If `c` is not a lowercase letter, it returns `c` unchanged.

## Explanation of `ft_tolower` function

This function, `ft_tolower`, converts an uppercase letter to its corresponding lowercase letter. If the character `c` is an uppercase letter (as determined by `ft_isalpha` function) and its ASCII value falls within the range of uppercase letters (65 to 90), it adds 32 to the ASCII value to convert it to its lowercase equivalent.

Here's a breakdown of what each part of the function does:

1. **`if (ft_isalpha(c) == 1 && (c >= 65 && c <= 90))`**: Check if the character `c` is an alphabet character and is an uppercase letter.

   - **`ft_isalpha(c) == 1`**: This condition checks if `c` is an alphabet character using the `ft_isalpha` function.

   - **`(c >= 65 && c <= 90)`**: This condition checks if the ASCII value of `c` falls within the range of uppercase letters.

2. **`return (c + 32);`**: If `c` is an uppercase letter, add 32 to its ASCII value to convert it to lowercase, and return the result.

3. **`return (c);`**: If `c` is not an uppercase letter, simply return `c` unchanged.

In summary, this function converts an uppercase letter to its corresponding lowercase letter by adding 32 to its ASCII value. If `c` is not an uppercase letter, it returns `c` unchanged.



## Explanation of `ft_digitcount` function

This function counts the number of digits in an integer `n`. Here's a breakdown of what each part of the function does:

1. **`long nb;`**: Declares a variable `nb` of type `long` to store the absolute value of the integer `n`. `long` is used instead of `int` to handle larger integers without overflow.

2. **`int count;`**: Declares a variable `count` of type `int` to keep track of the number of digits in `n`.

3. **`nb = n;`**: Assigns the value of `n` to `nb` to manipulate it without modifying the original value.

4. **`count = 0;`**: Initializes `count` to 0 before starting to count the digits.

5. **`if (nb < 0) { nb = -nb; count++; }`**: If `nb` is negative, changes its sign to positive by multiplying it by `-1`. Also increments `count` by 1 to account for the negative sign of the number.

6. **`while (nb / 10 != 0) { nb = nb / 10; count++; }`**: Uses a `while` loop to repeatedly divide `nb` by 10 until `nb` becomes equal to 0 (i.e., until there are no more digits to count). In each iteration of the loop, divides `nb` by 10 and increments `count` by 1 to count the digit.

7. **`count++;`**: After exiting the `while` loop, increments `count` by 1 more to count the last digit.

8. **`return (count);`**: The function returns the value of `count`, which represents the total number of digits in `n`, including the sign if `n` is negative.

In summary, this function calculates the number of digits in an integer `n`, including the sign if `n` is negative, using a `while` loop to repeatedly divide the absolute value of `n` by 10 until there are no more digits left.


# Ana Zubieta
