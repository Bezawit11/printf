#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 *
 *
 *
 */
int hexi_s(va_list arg)

{
int n, t;
char s;
char *k;
k = &s;
n = va_arg(arg, int);
if (n == 0)
{
s = n + '0';
write(1, k, 1);
return (1);
}
invert(n ,16, t);
return (length_base(n, 16));
}

/**
 *
 *
 */
int octal(va_list arg)

{
int n, t;
char s;
char *k;
k = &s;
n = va_arg(arg, int);
if (n == 0)
{
s = n + '0';
write(1, k, 1);
return (1);
}
invert(n, 8, t);
return (length_base(n, 8));
}

/**
 *
 *
 *
 */
int invert(int n, int b, int t)

{
int r;
char a;
char *s;
s = &a;
if (n == 0)
r = t;
if (n > 0)
{
r = n % b;
n = invert(n / b, b, n % b);
a = r + '0';
write(1, s, 1);
}
return (1);
}

/**
 *
 *
 *
 */
int length_base(int n, int base)

{
int a = 0;
while (n > 0)
{
n = n / base;
a++;
}
return (a);
}
