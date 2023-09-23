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

 void *addr;
    int len, len2;
        addr = (void *)0x7ffe637541f0;

       len =     _printf("%6d\n",20);

       len2 =    printf("%6d\n",20);
        printf("%d   %d",len, len2);

    return (0);
}
