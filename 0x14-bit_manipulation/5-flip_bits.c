#include "main.h"

/**
 * flip_bits - it counts the num of bits to change
 * to get from one num to another
 * @n: first num
 * @m: second num
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, count = 0;
unsigned long int current_y;
unsigned long int n_exclusive = n ^ m;
for (j = 63; j >= 0; j--)
{
current_y = n_exclusive >> i;
if (current_y & 1)
counter++;
}
return (counter);
}
