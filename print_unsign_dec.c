#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
*print_number - prints integer
*@arg: argument
*Return: int
*/
int print_unsigned(va_list arg)

{
unsigned int n;
int a = 1;
int h, d, c, i = 0, l = 0;
char b;
char *k;
k = &b;
n = va_arg(arg, unsigned int);
If (n < 1 && n != 0)
Return (-1);
d = n + 0;
if (n < 10 && n > 0)
{
b = n + '0';
write(1, k, 1);
l = l + 1;
}
else
{
while (d != 0)
{
i++;
d = d / 10;
}
i = i -1;
for (c = 0; c < i; c++)
{
a = a * 10;
}
b = (n / a) + '0';
write (1, k, 1);
l = l + 1;
for (h = 0; h <= i - 1; h++)
{
a = a / 10;
b = ((n / a) % 10) + '0';
write (1, k, 1);
l = l + 1;
}
}
return (l);
}
