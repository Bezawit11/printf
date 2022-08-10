#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 *get_op_func - returns a pointer to a function
 * *@s: operator passed as an argument
 * *Return: returns function pointers
 */
int (*get_fs_func(const char *s))(va_list arg)

{
if (*s == 'c')
{
return (char_print);
}
else if (*s == 's')
{
return (string_print);
}
else if (*s == 'd' || *s == 'i')
{
return (print_decimal);
}
else if (*s == 'u')
{
return (print_unsigned);
}
else if (*s == 'b')
{
return (unsigned_bi);
}
else if (*s == 'R')
{
return (rot13);
}
else if (*s == 'r')
{
return (reverse_array);
}
else if (*s == '%')
{
return (percent_print);
}
else
{
write(1, "%", 1);
write(1, s, 1);
return (non_specifier);
}
return (0);
}
