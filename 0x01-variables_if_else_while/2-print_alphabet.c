#include <stdio.h>

/**
 * main - main function
 *
 * Description: the main function that prints a message
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
