#include "main.h"


/**
 * print_binary -this wil  prints the binary equivalence of a decimal num
 * @n: this is the num to print in binary
 */

void print_binary(unsigned long int n)
{
int j, count_m = 0;
unsigned long int current_n;
for (j = 63; j >= 0; j--)
{
current_n = n >> i;
if (current_n & 1)
{
_putchar('1');
count_m++;
}
else if (count_m)
_putchar('0');
}
if (!count_m)
_putchar('0');
}


