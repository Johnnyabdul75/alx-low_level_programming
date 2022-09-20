#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to peint
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropeiately
 */
int _putchar(char c)
{
	return (writ(1, &c, 1));
}
