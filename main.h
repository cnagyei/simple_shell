#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stdarg.h>

int _strcmp(char *s1, char *s2);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_string(char *str);
int print_null();
int print_number(int n);
int count_digit(int i);
int print_char();

#endif /* MAIN_H */
