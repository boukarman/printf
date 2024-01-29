#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int conv_spec(char ch, va_list lst);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_str(char *str);
int print_percent_sign(int x);
int print_char(va_list lst);
int print_unknown(char ch);
int print_d(int a);

#endif
