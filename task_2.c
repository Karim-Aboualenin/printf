#include "main.h"

/**
 * 
 * print_binary - take an argument and turn to binary
 * @
*/
int print_binary(va_list args)
{
unsigned int num;
char temp;
int length, i = 0;
char *binary;
num = va_arg(args, unsigned int);
if (num == 0)
{
temp = 0 + '0';
write(1, &temp, 1);
return (1);
}
if (num < 0)
{
binary[i] = 1 + '0' ;
i++;
num = -num;
length++;
}
while (num > 0)
{
binary[i] = num % 2;
num /= 2;
length++;
}
write(1, binary, length);
return(length);
}