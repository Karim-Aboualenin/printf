#include "main.h"
/**
 * print_reverse - print a reversed string
 * @args: the list contain characters
 * Return: number of characters in the string
*/

int print_reverse(va_list args, flags_t *flags)
{
int len, i = 0;
char *s = va_arg(args, char *);
(void)flags;
if (s == NULL)
s = "(null)";
len = _strlen(s);
for (i = len - 1; i >= 0; i--)
write(1, &s[i], 1);
return (len);
}
