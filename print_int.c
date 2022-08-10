#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
 **print_number - prints integers
 **@n: inputs
 **Return: void
 **/
int print_decimal(va_list arg)

{
int n, m = 0, a = 1;
int h, d, c, i = 0, l = 0;
char b;
char *k;
n = va_arg(arg, int);
d = n + 0;
k = &b;
if (n < 10 && n > 0)
{
b = n + '0';
write(1, k, 1);
l = l + 1;
}
else
{
if (n < 0 && n != INT_MIN)
{
write(1, "-", 1);
n = n * -1;
d = n;
l = l + 1;
}
else if (n == INT_MIN)
{
write(1, "-", 1);
l = l + 1;
m = n + 0;
n = INT_MAX;
d = n;
}
while (d != 0)
{
i++;
d = d / 10;
}
i = i - 1;
for (c = 0; c < i; c++)
{
a = a * 10;
}
b = (n / a) + '0';
write(1, k, 1);
l = l + 1;
for (h = 0; h <= i - 1; h++)
{
a = a / 10;
b = ((n / a) % 10) + '0';
if (h == i - 1 && m != 0)
{
b = '8';
}
write(1, k, 1);
l = l + 1;
}
}
return (l);
}
