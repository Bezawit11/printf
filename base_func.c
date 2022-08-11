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
unsigned int n, t = 1;
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
invert_hex(n ,16, t);
return (length_base(n, 16));
}

/**
 *
 *
 */
int octal(va_list arg)

{
unsigned int n, t = 1;
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
int invert(unsigned int n, unsigned int b, unsigned int t)

{
unsigned int r;
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
 */
int invert_hex(unsigned int n, unsigned int b, unsigned int t)

{
unsigned int r;
char a;
char *s;
s = &a;
if (n == 0)
r = t;
if (n > 0)
{
r = n % b;
n = invert_hex(n / b, b, n % b);
if (r > 9 && r < 16)
{
a = r + '7' + ' ';
write(1, s, 1);
}
else
{
a = r + '0';
write(1, s, 1);
}
}
return (1);
}
/**
 *
 *
 *
 */
int length_base(unsigned int n, unsigned int base)

{
int a = 0;
while (n > 0)
{
n = n / base;
a++;
}
return (a);
}
