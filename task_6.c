#include "main.h"

/**
 * print_address - print a addres
 * @args: the list contain characters
 * Return: number of characters in the address
*/

int print_pointer(va_list args)
{
void *p;
char *temp;
int len = 0;
unsigned long x;
p = va_arg(args, void *);
if (p == NULL)
{
temp = ("nil");
len = _strlen(temp);
write(1, temp, len);
return (len);
}
temp = "0x";
write (1, temp, 2);
len = 2;
x = (unsigned long)p;
len += print_long_to_hexa(x);
return (len);
}
/**
 * print_hexa - take an unsigned long int and turn to hexa
 * @args: the list contain characters
 * Return: number of characters in the binary
*/
int print_long_to_hexa(unsigned long int num)
{
unsigned int result;
char temp;
int length = 0, i = 0;
char *hexa;
hexa = malloc(sizeof(char) * 33);
if (hexa == NULL)
return (0);
if (num == 0)
{
temp = 0 + '0';
write(1, &temp, 1);
return (1);
}
while (num > 0)
{
result = num % 16;
if (result < 10)
{
hexa[i] = result + '0';
}
else
hexa[i] = 'a' + (result - 10);
num /= 16;
length++;
i++;
}
reverse_array(hexa, length);
write(1, hexa, length);
return (length);
}
