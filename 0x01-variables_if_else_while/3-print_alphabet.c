#include <stdio.h>

/**
 * main - main function
 *
 * Description: the main function that prints a message
 *
 * Return: always 0
 */

int main() {
    char lowercase = 'a';
    char uppercase = 'A';

    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    putchar('\n');

    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return 0;
}

