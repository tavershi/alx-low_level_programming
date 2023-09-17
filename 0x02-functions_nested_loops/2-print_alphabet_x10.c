#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times
 *
 * Return: alwasy 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
