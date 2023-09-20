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
   

   len= _printf("Unknown:[%r]\n","hello from another world");
    printf("Length:[%d]\n", len);

    return (0);
}
