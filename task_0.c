#include "main.h"

/**
 * print_char - print a character
 * @args: the list contain characters
 * return: 1 if success
*/

void print_char(va_list args)
{
char s;
s = va_arg(args, int);
write(1, &s, 1);
}
/**
 * print_string - print a string
 * @args: the list contain characters
 * return: 1 if success
*/

void print_string(va_list args)
{
int len;
char *s = va_arg(args, char *);
char *p;
len = strlen(s);
p = malloc (sizeof(char) * len + 1);
if (p == NULL){}
strcpy(p, s);
write(1, &p, len);
}
