#include "main.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: The character to be checked
 * Return: 1 for alphabetic char or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97 && c <= 122))
	{
	return (1);
	}
return (0);
}
