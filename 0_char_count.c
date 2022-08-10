#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
*_printf - produces output according to a format
*@format: the string that contains the text
*Return: returns the number of character printed
*/
int _printf(const char *format, ...)
{
const char *c,*s;
int d = 0;
va_list arg;
va_start(arg, format);
c = format;
if (format  == NULL)
return (-1);
while (*c != '\0')
{
while (*c != '%' && *c != '\0')
{
write(1, c, 1);
d = d + 1;
c++;
}
if (*c != '\0')
{
if (*(c + 1) == '\0')
{
write(1, "%", 1);
return (1);
}
c++;
s = c;
d = d + get_fs_func(s)(arg);
}
else
break;
c++;
}
va_end(arg);
return (d);
}
