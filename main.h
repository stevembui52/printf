#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_chr(char c);
int print_str(char *str);
int _strlen(char *str);
#endif