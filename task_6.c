#include "main.h"

/**
 * print_address - print a addres
 * @args: the list contain characters
 * Return: number of characters in the address
*/

int print_pointer(va_list args)
{
void *p;
char *temp = ("nil");
int len = 0, result, i = 0;
unsigned long x;
char zero;
char *hexa = malloc(sizeof(char) * 33);
if (hexa == NULL)
return (0);
p = va_arg(args, void *);
if (p == NULL)
{
free (hexa);
len = _strlen(temp);
write(1, temp, len);
return (len);
}
temp = "0x";
write (1, &temp, 2);
len = 2;
x = (unsigned long)p;
if (x == 0)
{
zero = 0 + '0';
write(1, &zero, 1);
len++;
return (len);
}
while (x > 0)
{
result = x % 16;
if (result < 10)
hexa[i] = result + '0';
else
hexa[i] = 'A' + (result - 10);
x /= 16;
len++;
i++;
}
reverse_array(hexa, len);
write(1, hexa, len - 2);
return (len);
}
