#include "main.h"

/**
 * get_endianness - this will check if a machine is small or big endian
 * Return: 0 for big, 1 for small
 */

int get_endianness(void)
{
unsigned int j = 1;
char *ch = (char *) &j;
return (*ch);
}
