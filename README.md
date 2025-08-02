# About the project
In this project I implement some C functions by myself, thus creating my own library, aiming to get deep in the C language.

# Glossary

These first functions check wheter the argument, which mush have the value of an unsigned char, falls into a certain character class.

#### ft_isalpha();
> checks  for an alphabetic character
#### ft_isdigit();
> checks for a digit (0 through 9)
#### ft_isalnum();
> checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
#### ft_isascii();
> checks whether the argument is a 7-bit unsigned char value that  fits  into the ASCII character set.
#### ft_isprint();
> checks for any printable character including space.

#
These functions convert lowercase letters to uppercase, and vice versa.

#### ft_tolower();
#### ft_toupper();

#
#### ft_atoi();
> receive an string of digits and return this number as an int
#### ft_bzero();
> erase an amount of bytes received as argument of a block of memory also received as argument
#### ft_calloc();
> allocate memory for an array with a number of elements passed as arguments, each element of a size also passed as argument. Then fill this memory allocated with \0.
#### ft_itoa();
> receive a number as argument and return the pointer to the string with the sequence of digits equivalent of this number.
#### ft_memchr();
> scans the number of bytes passed as argument of a block of memory also passed as argument for the first instance of an character also passed as argument.
> return a pointer to that first occurence;
#### ft_memcmp();
> receive two block of memorys as argument, and iterate the amount of bytes of each also passed as argument. When they become different at some point,
> it calculates the difference based on the ASCII table and return these different.
#### ft_memcpy();
> copy an amount of bytes received as argument of a block of memory into another block of memory, both also passed as argument. Return a pointer to the block that received the copy.
#### ft_memmove();
> works the same as ft_memcpy(), but it checks if both blocks of memory may overlap before start to copy.
#### ft_memset();
> fill an amount of bytes passed as argument of a block of memory also passed as argument with an character also passed as argument.
#### ft_putchar_fd();
> output a character in a filedescriptor, both received as argument.
#### ft_putendl_fd();
> output a string in a filedescriptor, both passed as argument, followed by a new line.
#### ft_putnbr_fd();
> output a number in a filedescriptor, both passed as argument;
#### ft_putstr_fd();
> output a string in a filedescriptor;
#### ft_split();
> receive a string as argument, and use a character also passed as argument, as a delimiter, dividing the string into multiple strings. Return an array of multiple strings;
#### ft_strchr();
> receive a string as argument and search for the first ocurrence of a character also passed as argument. Return a pointer to that first ocurrence.
#### ft_strdup();
> receive a string as argument and generate a new identical string, returning it.
#### ft_striteri();
> receive a function as argument and iterate through a string, also receive as argument, apllying the function to each character;
#### ft_strjoin();
> receive two strings as argument and return a new one whith the union of both;
#### ft_strlcat();
> receive two strings as argument. Checks if the amount of bytes also received as argument is at least bigger than the length of the first string. Join elements of the second string until the first string acquires the bytespassed as argument. Returns the length of the string it's suppose to create;
#### ft_strlcpy();
> copy the amount of bytes passed as argument of a string passed as argument into another string also passed as argument. Returning the length of the string it tried to copy from;
#### ft_strlen();
> return the length of the string passed as argument.
#### ft_strmapi();
> Generate a new string based of the content of the string received as argument modified by the function passed as argument;
#### ft_strncmp();
> Receive two strings and iterate through them. If they're different at some point return the difference between them based on the ASCCII table.
#### ft_strnstr();
> search the first ocuurence of a string inside another, both passed as arguments. The amount of bytes searched is also passed as argument.
#### ft_strrchr();
> return a pointer to the last occurence of a character in a string, bot received as argument.
#### ft_strtrim();
> search for the occurence of a set of characters received as argument at the start and end of a string. Return a copy of the string, also received as argument, with the characters of the set removed;
#### ft_substr();
> 
