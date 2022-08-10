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
int rec(unsigned int n);
int rot13(va_list arg);
int reverse_array(va_list arg);
char *_memcpy(char *dest, char *src, unsigned int n);
int length_bi(unsigned int b, unsigned int base);
int non_specifier(va_lisr arg);
int (*get_fs_func(const char *s))(va_list arg);
#endif
