#include<stdio.h>
/**
 * main - 2-print_alphabet
 * Description: 'print'
 * Return- Always 0
 */
 int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++) 
	{
		putchar(ch);
		putchar('\n');
	}
	return 0;
}
