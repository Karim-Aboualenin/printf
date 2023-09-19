#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
    int len2;
    unsigned int ui;
        ui = (unsigned int)INT_MAX + 1024;
    len =         _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);


    len2 =       printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);


    printf("Length:[%d, %i]\n", len, len2);
    return (0);
}
