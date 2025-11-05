# Libft - My First C Library

## 📝 About
This project involves re-implementing a set of standard libc functions, along with other useful utility functions, to build a foundational C library.

## 📚 Glossary

### 1. Libc Functions
In this first part, I re-implemented a set of standard functions from the `libc`.

#### Character Classification & Conversion
| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isdigit` | Checks for a digit (0 through 9). |
| `ft_isalnum` | Checks for an alphanumeric character (equivalent to `isalpha` or `isdigit`). |
| `ft_isascii` | Checks whether `c` fits into the ASCII character set. |
| `ft_isprint` | Checks for any printable character, including space. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

#### String Manipulation
| Function | Description |
| :--- | :--- |
| `ft_strlen` | Calculates the length of a string. |
| `ft_strlcpy` | Copies up to `size - 1` characters from `src` to `dst`, NUL-terminating the result. |
| `ft_strlcat` | Appends `src` to the end of `dst`, ensuring total length does not exceed `size`. |
| `ft_strchr` | Locates the first occurrence of character `c` in string `s`. |
| `ft_strrchr` | Locates the last occurrence of character `c` in string `s`. |
| `ft_strncmp` | Compares not more than `n` characters of two strings. |
| `ft_strnstr` | Locates a substring in a string, searching at most `len` characters. |
| `ft_strdup` | Creates a duplicate of the string `s` using `malloc`. |
| `ft_atoi` | Converts the initial portion of a string to an integer. |

#### Memory Manipulation
| Function | Description |
| :--- | :--- |
| `ft_memset` | Fills the first `n` bytes of the memory area `s` with the constant byte `c`. |
| `ft_bzero` | Erases the data in the `n` bytes of the memory starting at `s` by writing zeros. |
| `ft_memcpy` | Copies `n` bytes from memory area `src` to memory area `dest`. |
| `ft_memmove` | Copies `n` bytes from `src` to `dest`, handling overlapping memory areas correctly. |
| `ft_memchr` | Scans the first `n` bytes of memory `s` for the first instance of `c`. |
| `ft_memcmp` | Compares the first `n` bytes of two memory areas. |
| `ft_calloc` | Allocates memory for an array and initializes it to zero. |

### 2. Additional Functions
A set of functions that are either not in the libc, or are part of it but in a different form.

#### String Operations
| Function | Description |
| :--- | :--- |
| `ft_substr` | Allocates and returns a substring from the string `s`, starting at index `start` and of max size `len`. |
| `ft_strjoin` | Allocates and returns a new string resulting from the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Allocates and returns a copy of `s1` with characters specified in `set` removed from the beginning and end. |
| `ft_split` | Allocates and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. |
| `ft_strmapi` | Applies function `f` to each character of `s` to create a new string. |
| `ft_striteri` | Applies function `f` on each character of `s` passed as argument, passing its index as the first argument. |

#### Conversion & Output
| Function | Description |
| :--- | :--- |
| `ft_itoa` | Allocates and returns a string representing the integer received as an argument. |
| `ft_putchar_fd`| Outputs the character `c` to the given file descriptor. |
| `ft_putstr_fd` | Outputs the string `s` to the given file descriptor. |
| `ft_putendl_fd`| Outputs the string `s` to the given file descriptor, followed by a newline. |
| `ft_putnbr_fd` | Outputs the integer `n` to the given file descriptor. |

### 3. Bonus Functions (Linked Lists)
Functions to manipulate generic linked lists.

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Allocates and returns a new node with the given content. |
| `ft_lstadd_front`| Adds the node `new` at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds the node `new` at the end of the list. |
| `ft_lstdelone` | Frees the memory of a node's content using the given function `del` and frees the node. |
| `ft_lstclear` | Deletes and frees the given node and every successor of that node. |
| `ft_lstiter` | Iterates the list and applies the function `f` to the content of each node. |
| `ft_lstmap` | Iterates the list and applies `f` to each node's content to create a new list. |

### 4. Get Next Line (GNL)
A utility function that reads a file line by line.

| Function | Description |
| :--- | :--- |
| `get_next_line` | Reads a line from a file descriptor. Successive calls to this function will read the entire file, line by line, until the end. It handles multiple file descriptors simultaneously without losing the reading thread on any of them. |
