#include "main.h"

/**
 * print_binary - take an argument and turn to binary
 * @args: the list contain characters
 * Return: number of characters in the binary
*/
int print_binary(va_list args, flags_t *flags)
{
unsigned int num;
char temp;
int length = 0, i = 0;
char *binary;
(void)flags;
num = va_arg(args, int);
binary = malloc(sizeof(char) * 33);
if (binary == NULL)
return (0);
if (num == 0)
{
temp = 0 + '0';
write(1, &temp, 1);
return (1);
}
while (num > 0)
{
binary[i] = (num % 2) + '0';
num /= 2;
length++;
i++;
}
reverse_array(binary, length);
write(1, binary, length);
return (length);
}
