#include <stdio.h>
#include "main.h"

/**
 *  *rot13 - encode
 *   *@c: char pointer
 *    *Return: returns a value
 */
int rot13(va_list arg)

{
int i, d;
char *s;
char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char p[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
s = va_arg(arg, char*);
if (s == NULL)
return (-1);
for (i = 0; s[i] != '\0'; i++)
{
for (d = 0; d < 53; d++)
{
if (s[i] == c[d])
{
write(1, p + d, 1);
break;
}
}
if (d == 53)
write(1, s + i, 1);
}
return (i);
}

/**
 *
 *
 *
 *
 */
void reverse_array(int *a, int n)

{
int i, t;
for (i = 0; i < n / 2; i++)
{
t = a[i];
a[i] = a [n - 1 - i];
a[n - 1 - i] = t;
}
}
