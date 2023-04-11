#include "main.h"

/**
 * binary_to_uint - this will converts a binary num to unsigned int
 * @b:this is the  string containing the binary num
 *
 * Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
int j;
unsigned int decim_val = 0;
if (!b)
return (0);
for (j = 0; b[j]; j++)
{
if (b[j] < '0' || b[j] > '1')
return (0);
decim_val = 2 * decim_val + (b[j] - '0');
}
return (decim_val);
}
