#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 *_printf - produces output according to a format
 *@format: the string that contains the text
 *Return: returns the number of characters printed
 */
int _printf(const char *format, ...)

{
const char *c;
int count = 0;
char *s;
char a;
char str[2] = {'c', '\0'};
va_list arg;
va_start(arg, format);
c = format;
if (format == NULL)
return (-1);
while (*c != '\0')
{
while (*c != '%' && *c != '\0')
{
write(1, c, 1);
count = count + 1;
c++;
}
if (*c != '\0')
{
c++;
if (*c == 'c')
{
a = va_arg(arg, int);
if (a == NULL)
return (-1);
*str = a;
write(1, str, 1);
count = count + 1;
}
else if (*c == '%')
{
write(1, "%", 1);
count = count + 1;
}
else if (*c == 's')
{
s = va_arg(arg, char*);
if (s == NULL)
return (-1);
while (*s != '\0')
{
write(1, s, 1);
count = count + 1;
s++;
}
}
}
else
break;
c++;
}
va_end(arg);
return (count);
}
