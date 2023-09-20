#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: the string
 * Return: a pointer to the string
*/
char *rot13(char *s)
{
int i = 0, j = 0;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
}
}
return (s);
}
