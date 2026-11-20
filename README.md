*This project has been created as part of the 42 curriculum by jovitor.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 School curriculum.

The main goal of this project is to recreate a collection of standard C library functions, along with additional utility functions and linked list operations.

By implementing these functions from scratch, the project helps develop a deeper understanding of memory management, pointers, strings, data structures, and low-level programming in C.

The resulting library, `libft.a`, can be reused in future C projects throughout the 42 curriculum.

## Library Contents

The library is organized into five main groups of functions.

### 1. Character Classification and Conversion

Functions used to identify and convert characters.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### 2. Memory Manipulation

Functions for handling and manipulating memory blocks.

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory block with a specified byte value. |
| `ft_bzero` | Sets a specified number of bytes to zero. |
| `ft_memcpy` | Copies a specified number of bytes between memory areas. |
| `ft_memmove` | Copies memory areas while supporting overlapping regions. |
| `ft_memchr` | Searches for a byte within a memory block. |
| `ft_memcmp` | Compares two memory blocks byte by byte. |
| `ft_calloc` | Allocates memory for multiple elements and initializes it to zero. |

### 3. String Manipulation

Functions for handling, searching, comparing, and transforming strings.

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strlcpy` | Copies a string into a destination buffer with size limitations. |
| `ft_strlcat` | Concatenates strings while respecting the destination buffer size. |
| `ft_strnstr` | Searches for a substring within a limited portion of another string. |
| `ft_strdup` | Creates a dynamically allocated copy of a string. |
| `ft_atoi` | Converts a string into an integer. |
| `ft_itoa` | Converts an integer into a string. |
| `ft_substr` | Creates a substring from a given string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string, allowing modifications. |

### 4. File Descriptor Output

Functions for writing characters, strings, and numbers to a specified file descriptor.

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### 5. Linked List Operations

The library also includes functions for creating and manipulating singly linked lists.

Each node is represented by the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

The `content` member stores the data, while `next` points to the following node.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node containing the given content. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstdelone` | Deletes a node and its content using a provided deletion function. |
| `ft_lstclear` | Deletes an entire list and frees its allocated memory. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## Instructions

### Requirements

- A C compiler (`cc`).
- `make`.
- The `ar` utility.

### Compilation

Clone the repository:

```bash
git clone <repository-url>
cd Libft
```

Compile the library:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Performs a full rebuild of the library. |

### Using the Library

Include the header in your C project:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Run the executable:

```bash
./program
```

## Technical Considerations

- The project is written entirely in C.
- Functions are implemented according to the expected behavior of their standard counterparts where applicable.
- Dynamic memory allocation is handled using `malloc` and `free`.
- The library is compiled into a static archive using `ar`.
- Compilation uses `-Wall -Wextra -Werror`.
- The project follows the 42 School coding standards (Norminette).

## Resources

The following resources were consulted or used for understanding C programming, standard library behavior, memory management, and project requirements:

- 42 Libft Subject
- [w3schools](https://www.w3schools.com/c/index.php)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GeeksforGeeks — C Programming](https://www.geeksforgeeks.org/c/c-programming-language/)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/)

### AI Usage

AI tools were used as learning and support resources during the
development of this project.

Their assistance included:

- Part 1 – Libc functions: Clarifying standard C function behavior,
  pointer operations, memory handling, and edge cases.
- Part 2 – Additional functions: Reviewing string manipulation,
  dynamic memory allocation, and possible error cases.
- Part 3 – Linked lists: Understanding node management,
  list traversal, memory ownership, and allocation failure handling.
- Makefile: Understanding compilation, linking, archive creation,
  and build dependencies.
- Documentation: Reviewing and organizing the README structure.

AI was also used to help explain potential bugs and support
the debugging process.