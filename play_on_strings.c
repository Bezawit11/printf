#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * *rot13 - encode
 * *@c: char pointer
 * *Return: returns a value
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
 *Return: returns a negative value
 */
int reverse_array(va_list arg)

{
int i, l = 0;
char c;
char *s, *h;
s = va_arg(arg, char*);
if (s == NULL)
return (-1);
for (i = 0; s[i] != '\0'; i++)
{
l = l + 1;
}
h = malloc(sizeof(char) * l + 1);
if (h == NULL)
return (-1);
_memcpy(h, s, l);
for (i = 0; i < l / 2; i++)
{
c = h[i];
h[i] = h[l - 1 - i];
h[l - 1 - i] = c;
}
for (i = 0; i < l; i++)
{
write(1, h + i, 1);
}
return (l);
}

/**
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
