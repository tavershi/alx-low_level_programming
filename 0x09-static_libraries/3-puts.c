#include "main.h"

/**
 * _puta - print a string to stdout
 * @str: the string to be printed
 *_putchar print a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar ('\n');
}
