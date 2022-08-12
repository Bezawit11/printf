#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 *char_print - prints character
 *@args
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
 *Return: 0
 */
int string_print(va_list arg)

{
int count = 0;
char *s;
s = va_arg(arg, char*);
if (s == NULL)
{
write(1, "(null)", 6);
return (6);
}
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
rec(b);
return (length_bi(b, 2));
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
return (1);
}

/**
 *
 *
 *Returns: (1)
 */
int percent_print(__attribute__((unused))va_list arg)

{
write(1, "%", 1);
return (1);
}

/**
 *
 *
 */
int string_print_cap(va_list arg)

{
char str[2] = {'c', '\0'};
char a[] = {'\\', 'x', '0', 'A', '\0'};
int count = 0;
char *s;
int i;
s = va_arg(arg, char*);
if (s == NULL)
{
write(1, "(null)", 6);
return (6);
}
while (*s != '\0')
{
if (*s == '\n') 
{
for (i = 0; a[i] != '\0'; i++)
{
*str = a[i];
write(1, str, 1);
count = count + 1;
}
}
else
{
write(1, s, 1);
count = count + 1;
}
s++;
}
return (count);
}

/**
 *
 *
 */
int non_specifier(__attribute__((unused))va_list arg)
  
{
return (2);
}
