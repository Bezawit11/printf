<<<<<<< HEAD
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
*_printf - produces output according to a format
*@format: the string that contains the text
*Return: returns the number of characters printed
*/
int _printf(const char *format, ...)
{
const char *c,*s;
int d = 0;
const char *c,*s;
va_list arg;
va_start(arg, format);
c = format;
if (format  == NULL)
=======
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
>>>>>>> origin/first_task
return (-1);
while (*c != '\0')
{
while (*c != '%' && *c != '\0')
{
write(1, c, 1);
<<<<<<< HEAD
d = d + 1;
=======
count = count + 1;
>>>>>>> origin/first_task
c++;
}
if (*c != '\0')
{
c++;
<<<<<<< HEAD
s = c;
d = d + get_fs_func(s)(arg);
=======
if (*c == 'c')
{
a = va_arg(arg, int);
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
{
s = "(null)";
}
while (*s != '\0')
{
write(1, s, 1);
count = count + 1;
s++;
}
}
>>>>>>> origin/first_task
}
else
break;
c++;
}
va_end(arg);
<<<<<<< HEAD
return (d);
=======
return (count);
>>>>>>> origin/first_task
}
