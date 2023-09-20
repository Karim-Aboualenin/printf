#include "main.h"
/**
 * print_reverse - print a reversed string
 * @args: the list contain characters
 * Return: number of characters in the string
*/

int print_string(va_list args)
{
int len;
char *s = va_arg(args, char *);
if (s == NULL)
s = "(null)";
len = _strlen(s);
reverse_array(s, len);
write(1, s, len);
return (len);
}
