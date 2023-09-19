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
    len = _printf("Unsigned:[%u]\n", ui);
    len2 =printf("Unsigned:[%u]\n", ui);
    printf("Length:[%d, %i]\n", len, len2);
    return (0);
}
