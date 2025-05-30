# LIBFT - Custom Standard Library

## Description
This project is part of the 42 school curriculum and consists of creating a custom C library called libft. It provides a collection of standard C functions, as well as some additional utilities that are useful for other projects.

## Purpose
The main objective is to deepen understanding of how standard functions work internally and gain experience in memory management, pointers, and basic data structures in C.

## Structure

- src/d_ascii/
Contains functions for character classification and manipulation (e.g., isalpha, isdigit, isprint, etc.).

- src/d_fds/
Functions to write characters, strings, and numbers to file descriptors.

- src/d_get_next_line/
Implements get_next_line, a function that reads a file line by line.

- src/d_lists/
Linked list manipulation utilities using a custom singly linked list structure.

- src/d_memory/
Memory manipulation functions such as memset, memcpy, calloc, etc.

- src/d_printf/
A custom implementation of the standard printf function.

- src/d_strings/
Functions for string handling: copying, concatenation, comparison, searching, trimming, etc.

- src/
Miscellaneous functions such as atoi, itoa, split, realloc, and double pointer memory management helpers.

## Bonus Part
Includes additional structures and functions such as extended linked lists and custom utilities.

## Custom Types

- t_size: A typedef for unsigned int.
- t_split: Structure used internally by split function.
- t_list_42: Custom singly linked list node.
- t_Itoa: Structure used for internal handling of the itoa function.
- t_format: Used for handling format specifiers in printf.
- t_fdnode: Node structure used in get_next_line_bonus.

## Compilation

The library is compiled into a static .a archive which can be included in other C projects to use the implemented functions.

## Author

- Ana Zubieta
- Student at 42 Málaga - Fundación Telefónica
- GitHub: ateibuzena
- Email: ena.ateibuz@gmail.com
