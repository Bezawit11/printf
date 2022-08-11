#ifndef MAIN_FILE
#define MAIN_FILE

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
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
int hexi_s(va_list arg);
int invert(unsigned int n, unsigned int b, unsigned int t);
int octal(va_list arg);
int length_base(unsigned int n, unsigned int base);
int non_specifier();
int (*get_fs_func(const char *s))(va_list arg);
#endif
