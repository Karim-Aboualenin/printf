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

    int len, len2;
       len =  _printf("%12s\n","hello");
       len2 =  printf("%12s\n", "hello");
   printf("%d  %d",len,len2);
    return (0);
}
