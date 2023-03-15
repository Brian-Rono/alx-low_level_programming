# 0x09. C - Static libraries

### Requirements
#### C
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All files should end with a new line
* [Betty style.](https://blog.ehoneahobed.com/betty-styles-for-c-programming-explained)
* No global variables
* No standsrd libraries. *printf, puts,* etc...forbidden
* use _putchar
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
#### Bash
The first line of all your files should be exactly *#!/bin/bash*

### Tasks
#### 1. libmy.a, main.h
Create the static library *lbmy.a* containing all the functions listed below:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

*main.h* file should contain all the prototypes of the above functions.

#### 2. create_static_lib.sh
This script creates a static library called liball.a from all the .c files that are in the current directory.

### Notes
[What is make utility and makefile?](https://opensource.com/article/18/8/what-how-makefile)