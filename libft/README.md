This project has been created as part of the 42 curriculum by zchin.

# libft

## Description
Libft is the first project of the 42 curriculum. The goal of this project is to create a personal C library containing commonly used functions that are not included in the standard C library, as well as reimplementing several existing standard functions.

This project helps develop a strong understanding of C programming fundamentals, including memory management, pointers, strings, data structures, and linked lists.

The library created in this project is called `libft.a`. It is a static library that can be compiled and linked with other C programs to provide reusable utility functions.

## Instructions

### Compilation

The project is built using the `Makefile`, which compiles all `.c` source files into object files and archives them into a static library.

```bash
make            # compiles libft.a
make clean      # removes object files
make fclean     # removes object files and libft.a
make re         # fclean + make
```
The library can then be linked with other C Programs, such as `main.c`.

Make Sure to add this line on the top of the `main.c` file:

```
#include "libft.h"
```

To Compile: 

```bash
cc main.c -L. -lft
```

The compiler will search for `libft.a` and link the functions needed to create an executable file.


## Library Overview

The library contains several categories of functions:

### Character Checking and Conversion
Functions used to test and manipulate characters:

- `ft_isalpha` - Checks if a character is an alphabetic letter.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isascii` - Checks if a character belongs to the ASCII character set.
- `ft_isprint` - Checks if a character is printable.
- `ft_toupper` - Converts a lowercase character to uppercase.
- `ft_tolower` - Converts an uppercase character to lowercase.

### Memory Manipulation
Functions for handling memory blocks:

- `ft_memset` - Fills a memory area with a specific byte.
- `ft_bzero` - Sets a memory area to zero.
- `ft_memcpy` - Copies memory from one location to another.
- `ft_memmove` - Copies memory safely when areas overlap.
- `ft_memchr` - Searches for a byte in memory.
- `ft_memcmp` - Compares two memory areas.
- `ft_calloc` - Allocates and initializes memory.
- `ft_strdup` - Duplicates a string.

### String Manipulation
Functions for handling strings:

- `ft_strlen` - Calculates string length.
- `ft_strlcpy` - Copies a string with size limitation.
- `ft_strlcat` - Concatenates strings safely.
- `ft_strchr` - Finds the first occurrence of a character.
- `ft_strrchr` - Finds the last occurrence of a character.
- `ft_strncmp` - Compares two strings.
- `ft_strnstr` - Searches for a substring.
- `ft_substr` - Creates a substring.
- `ft_strjoin` - Joins two strings together.
- `ft_strtrim` - Removes specified characters from the beginning and end of a string.
- `ft_split` - Splits a string into an array of strings.
- `ft_strmapi` - Applies a function to each character of a string.
- `ft_striteri` - Iterates through a string and modifies each character.

### Conversion
Functions for converting data between different representations:

- `ft_atoi` - Converts a string representing an integer into its corresponding int value.
- `ft_itoa` - Converts an integer into a string.

### File Descriptor Output
Functions for writing data to file descriptors:

- `ft_putchar_fd` - Writes a character.
- `ft_putstr_fd` - Writes a string.
- `ft_putendl_fd` - Writes a string followed by a newline.
- `ft_putnbr_fd` - Writes an integer.

### Linked List Management
Functions for manipulating linked lists:

- `ft_lstnew` - Creates a new list node.
- `ft_lstadd_front` - Adds a node at the beginning.
- `ft_lstsize` - Counts the number of nodes.
- `ft_lstlast` - Returns the last node.
- `ft_lstadd_back` - Adds a node at the end.
- `ft_lstdelone` - Deletes one node.
- `ft_lstclear` - Deletes and frees a complete list.
- `ft_lstiter` - Applies a function to each node.
- `ft_lstmap` - Creates a new list by applying a function to each node.

---

## Resources

- [The GNU C Library Reference Manual](https://www.gnu.org/software/libc/manual/) — reference for standard `libc` function behavior and edge cases.
- [cppreference.com – C Standard Library](https://en.cppreference.com/w/c) — quick reference for function signatures and semantics.
- [man7.org Linux man-pages](https://man7.org/linux/man-pages/dir_section_3.html) — man pages for `malloc`, `memcpy`, `strdup`, and other libc functions.
- 42's own libft subject PDF through intra.


### AI usage

AI was used during this project to help with **debugging and concept understanding**.

- Understanding C concepts such as pointers, memory allocation, and linked lists.
- Debugging errors and interpreting compiler/tester output.
- Reviewing implementations and identifying possible edge cases.
- Improving understanding of standard C library behavior.

All core function logic, algorithm choices, and final code were written and verified by the author.


