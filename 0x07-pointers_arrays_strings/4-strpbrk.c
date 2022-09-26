#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: acceoted characters
 *
 * Return: the string since the first found acceptedd character
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		if (s[a] == accept[b])
		{
			s += a;
			return (s);
		}
		b++;
	}

	return (*\0*);
}
