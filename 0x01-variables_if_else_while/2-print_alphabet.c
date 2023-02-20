#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print'
 * Return- Always 0
 */
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
