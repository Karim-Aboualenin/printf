#include "main.h"

/**
 * print_pointer - print a addres
 * @args: the list contain characters
 * @flags: the flags
 * Return: number of characters in the address
*/

int print_pointer(va_list args, flags_t *flags)
{
void *p;
char *temp;
int len = 0;
unsigned long x;
(void)flags;
p = va_arg(args, void *);
if (p == NULL)
{
temp = "(nil)";
len = _strlen(temp);
write(1, temp, len);
return (len);
}
x = (unsigned long)p;
len += print_long_to_hexa(x, flags);
return (len);
}
/**
 * print_long_to_hexa - take an unsigned long int and turn to hexa
 * @num: thge number contain characters
 * @flags: the flags
 * Return: number of characters in the binary
*/
int print_long_to_hexa(unsigned long int num, flags_t *flags)
{
unsigned int result;
char temp, temp_2 = ' ';
int length = 0, i = 0, iter, org_len = 0;
char *hexa, *start = "0x";
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
org_len++;
i++;
}
reverse_array(hexa, org_len);
if (flags->width > (org_len + 2))
{
for (iter = 0; iter < flags->width - org_len - 2; iter++)
{
write(1, &temp_2, 1);
length++;
}}
write(1, start, 2);
length += 2;
write(1, hexa, org_len);
length += org_len;
return (length);
}
