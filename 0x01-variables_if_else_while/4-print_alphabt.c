#include <stdio.h>
/**
 * main - main function
 *
 * Description: the main function that prints a message
 *
 * Return: always 0
 */

int main() {
    char letter = 'a';

    while (letter <= 'z') {
        if (letter != 'e' && letter != 'q') {
            putchar(letter);
        }
        letter++;
    }

    putchar('\n');

    return 0;
}

