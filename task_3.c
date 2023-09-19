#include "main.h"
/**
 * convert_unsigned - take an argument and turn to unsigned number
 * @args: the list contain characters
 * Return: the number of characters in the unsigned number
*/

int convert_unsigned(va_list args)
{
unsigned int num = va_arg(args, unsigned int);

return (print_unsigned(num));
}
/**
 * print_unsigned - print an unsigned integer
 * @uns_num: the number
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

/**
 * print_octal - take an argument and turn to octal
 * @args: the list contain characters
 * Return: number of characters in the binary
*/
int print_octal(va_list args)
{
unsigned int num;
char temp;
int length = 0, i = 0;
char *octal;
num = va_arg(args, int);
octal = malloc(sizeof(char) * 33);
if (octal == NULL)
return (0);
if (num == 0)
{
temp = 0 + '0';
write(1, &temp, 1);
return (1);
}
while (num > 0)
{
octal[i] = (num % 8) + '0';
num /= 8;
length++;
i++;
}
reverse_array(octal, length);
write(1, octal, length);
return (length);
}
/**
 * print_hexa - take an argument and turn to hexa
 * @args: the list contain characters
 * Return: number of characters in the binary
*/
int print_hexa(va_list args)
{
unsigned int num, result;
char temp;
int length = 0, i = 0;
char *hexa;
num = va_arg(args, int);
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

/**
 * print_Hexa - take an argument and turn to hexa
 * @args: the list contain characters
 * Return: number of characters in the binary
*/
int print_Hexa(va_list args)
{
unsigned int num;
char temp;
int length = 0, i = 0, result;
char *hexa;
num = va_arg(args, int);
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
hexa[i] = result + '0';
else
hexa[i] = 'A' + (result - 10);
num /= 16;
length++;
i++;
}
reverse_array(hexa, length);
write(1, hexa, length);
return (length);
}

