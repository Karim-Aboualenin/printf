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
    void *addr;
        addr = (void *)0x7ffe637541f0;
len =printf("Address:[%p]\n", addr);
  len2=  printf("Address:[%p]\n", addr);
  printf("Length:[%d, %i]\n", len, len2);
}
