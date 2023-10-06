#include "main.h"
/**
 * _memset - the program fills a block of memory with specific value
 * @s: starting address of memory to be filled
 * @b: the desire value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
