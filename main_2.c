#include <limits.h>
#include <stdio.h>
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
len =  _printf("Character:[%c]\n", 'H');
len2 = printf("Character:[%c]\n", 'H');
 printf("Length:[%d, %i]\n", len, len2);
    return(0);
}