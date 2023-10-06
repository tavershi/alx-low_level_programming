#include "main.h"
/**
 * _atoi - converting a string into an integer
 * @s: is the string to use in the program
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sig = 1, y = 0;
	unsigned unsig = 0;

	while (!(s[y] <= '9' && s[y] >= '0') && s[y] != '\0')
	{
		if (s[y] == '-')
			sig *= -1;
		y++;
	}
	while (s[y] <= '9' && (s[y] >= '0' && s[y] != '\0'))
	{
		unsig = (unsig *10) + (s[y] - '0');
		y++;
	}
	unsig *= sig;
	return (unsig);
}
