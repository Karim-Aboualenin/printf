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
if (flags->l == 1)
num = (long int)num;
else if (flags->h == 1)
num = (short int)num;
length += print_number(num, flags);
return (length);
}
/**
 * print_number - print an integer
 * @num: the number
 * @flags: the flags
 * Return: number of characters in the  integer
*/

int print_number(int num, flags_t *flags)
{
int org_len = 0, i = 0, len = 0, iter, once = 1;
char temp = ' ';
char *number;
number = malloc(sizeof(int) * 33);
if (num == INT_MIN)
{
number[i++] = '-';
number[i++] = '2';
org_len += 2;
num %= 1000000000;
num = -num;
}
if (num == 0)
{
number[i] = '0';
org_len++;
}
else
{
if (num < 0)
{
org_len++;
number[i++] = '-';
num = -num;
}
if (num > 9)
org_len += print_number(num / 10, flags);
number[i++] = num % 10 + '0';
org_len++;
}
if ((flags->width > org_len) && once == 1)
{
for (iter = 0; iter < flags->width - org_len - 1; iter++)
{
write(1, &temp, 1);
len++;
once = 0;
}}
len += org_len;
write (1, number, org_len);
return (len);
}
