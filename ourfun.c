#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 *char_print - prints character
 *
 *Return: (1) 
 */
int char_print(va_list arg)

{
char str[2] = {'c', '\0'};
char a;
a = va_arg(arg, int);
*str = a;
write(1, str, 1);
return (1);
}

/**
 *string_print - prints a string
 *
 */
int string_print(va_list arg)

{
int count = 0;
char *s;
s = va_arg(arg, char*);
if (s == NULL)
return (-1);
while (*s != '\0')
{
write(1, s, 1);
count = count + 1;
s++;
}
return (count);
}

/**
 *
 *
 */
int unsigned_bi(va_list arg)

{
unsigned int b;
char s;
char *k;
k = &s;
b = va_arg(arg, unsigned int);
if (b == 0)
{
s = b + '0';
write(1, k, 1);
return (1);
}
return (rec(b));
}

/**
 *
 *
 */
int length_bi(unsigned int b, unsigned int base)
  
{
int a = 0;
while (b > 0)
{
b = b / base;
a++;
}
return (a);
}

/**
 *
 *
 */
int rec(unsigned int n)

{
int r;
char a;
char *s;
s = &a;
if (n == 1)
r = 1;
if (n > 0)
{
r = n % 2;
n = rec(n / 2);
a = r + '0';
write(1, s, 1);
}
return (length_bi(n, 2));
}

/**
 *
 *
 *Returns
 */
int percent_print(__attribute__((unused))va_list arg)

{
write(1, "%", 1);
return (1);
}
