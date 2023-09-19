#include "main.h"
/**
 * convert_unsigned - take an argument and turn to unsigned number
 * @args: the list contain characters
 * Return: the number of characters in the unsigned number
*/

int convert_unsigned(va_list args)
{
unsigned num = va_arg(args, unsigned int);
return (print_unsigned(num));
}
/**
 * print_unsigned - print an unsigned integer
 * @num: the number
 * Return: number of characters in the  integer
*/

int print_unsigned(unsigned int uns_num)
{
int len = 0;
char temp;
if (uns_num == 0)
{
temp = '0';
write(1, &temp, 1);
len++;
return (len);
}

if (uns_num > 9)
{
len += print_number(uns_num / 10);
}
temp = uns_num % 10 + '0';
write(1, &temp, 1);
len++;
return (len);
}
