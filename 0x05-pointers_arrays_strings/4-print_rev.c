#include "main.h"

/**
 * print_rev - function that prints string in reverse
 *
 * @s: pointer to the string being referred
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
