*This activity has been created as part of the 42 curriculum by ybarakat.*

# Libft Project

## Description
Libft is a foundational C library project from the 42 curriculum. The goal of this project is to recreate a set of standard C library functions, along with several additional utility functions, to better understand memory management, string manipulation, and linked lists in C.

This library serves as a personal toolkit for future 42 projects, allowing reuse of well-tested functions. Functions include basic string and memory operations, character checks, conversions, as well as linked list handling functions.

## Instructions

### Compilation
To compile the library:

```bash
make

This will generate libft.a which can be linked with your projects.

Usage

Include the library header in your C files:

#include "libft.h"


Link the library during compilation:

gcc main.c -L. -lft -o my_program

Cleaning

Remove object files and the library:

make fclean


Recompile the library from scratch:

make re
```
## Resources

C Standard Library Documentation

GNU C Library Reference

'https://www.learn-c.org/en/Linked_lists'
 
'https://makefiletutorial.com/' 

AI Usage:

Explaining function behavior

Reviewing and correcting Norminette
