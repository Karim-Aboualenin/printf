#include "main.h"

/**
 * print_rot_13 - prints the rot13'ed string
 * @args: the list contain characters
 * Return: number of characters in the string
*/
int print_rot_13(va_list args, flags_t *flags)
{
int len;
int i = 0, j = 0;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *s = va_arg(args, char *);
(void)flags;
if (s == NULL)
s = "(null)";
len = _strlen(s);
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
write(1, &b[j], 1);
break;
}
}
}
else
write(1, &s[i], 1);
}
return (len);
}
