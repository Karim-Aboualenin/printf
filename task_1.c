#include "main.h"
/**
 * convert_int - take an argument and turn to number
 * @args: the list contain characters
 * @flags: the flags
 * Return: the number of characters in the number
*/

int convert_int(va_list args, flags_t *flags)
{
int num = va_arg(args, int);
int length = 0;
char temp;
if (flags->plus == 1 && num >= 0)
{
temp = '+';
write(1, &temp, 1);
length++;
}
else if (flags->space == 1 && num >= 0)
{
temp = ' ';
write(1, &temp, 1);
length++;
}

length += print_number(num);
return (length);
}
/**
 * print_number - print an integer
 * @num: the number
 * Return: number of characters in the  integer
*/

int print_number(int num)
{
int len = 0;
char temp;
if (num == INT_MIN)
{
temp = '-';
write(1, &temp, 1);
len++;
temp = '2';
write(1, &temp, 1);
len++;
num %= 1000000000;
num = -num;
}
if (num == 0)
{
temp = '0';
write(1, &temp, 1);
len++;
return (len);
}
if (num < 0)
{
len++;
temp = '-';
write(1, &temp, 1);
num = -num;
}
if (num > 9)
{
len += print_number(num / 10);
}
temp = num % 10 + '0';
write(1, &temp, 1);
len++;
return (len);
}
