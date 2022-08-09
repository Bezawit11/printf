#ifndef MAIN_FILE
#define MAIN_FILE

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char*format, ...);
int char_print(va_list arg);
int string_print(va_list arg);
int percent_print();
int print_decimal(va_list arg);
int print_unsigned(va_list arg);
int unsigned_bi(va_list arg);
int rec(int n);
int (*get_fs_func(const char *s))(va_list arg);
#endif
