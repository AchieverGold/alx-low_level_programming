#include "main.h"
#include <unistd.h>
/**
 * _putchat - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1.
 * On error, -1 is required, anderrno is set appropriately.
 */
int _putchar(char c)
{
          return (write(1, &c, 1));
}
