#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
*print_number - prints integer
*@arg: arguments
*Return: int
*/
int print_unsigned(va_list arg)

{
int n, a = 1, l = 0;
<<<<<<< HEAD
unsigned int m;
unsigned int h, d, c, i = 0;
=======
unsigned int m, h, d, c, i = 0;
>>>>>>> 6c3a99d7ca989884c0bd16d0af6fb63cc7f9fc4d
char b;
char *k;
k = &b;
n = va_arg(arg, int);
if (n == 0)
{
write(1, "0", 1);
return (1);
}
d = n + 0;
if (n < 10 && n > 0)
{
b = n + '0';
write(1, k, 1);
l = l + 1;
}
else
{
if (n < 0)
{
m = UINT_MAX + n + 1;
d = m;
}
<<<<<<< HEAD
=======
else
{
m = n;
d = m;
}
>>>>>>> 6c3a99d7ca989884c0bd16d0af6fb63cc7f9fc4d
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
b = (m / a) +'0';
write(1, k, 1);
l = l + 1;
for (h = 0; h <= i - 1; h++)
{
a = a / 10;
b = ((m / a) % 10) + '0';
write(1, k, 1);
l = l + 1;
}
}
return (l);
}
