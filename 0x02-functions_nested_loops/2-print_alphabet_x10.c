#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase, followed by
 * a new line.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i;

for (i = 0; i < 10; i++)
while (letter <= 'z')
_putchar(letter);
letter++;
letter = 'a'; /* reset letter to 'a' for next line */
_putchar('\n');
{
