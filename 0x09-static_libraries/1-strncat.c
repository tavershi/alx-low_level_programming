#include "main.h"
/**
 * _strncat - this is the function that concatenate two string
 * using n bytes from src
 * @dest: enter value
 * @src: enter value
 * @n: enter value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
