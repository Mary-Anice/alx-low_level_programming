#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)

{
unsigned int n1;

n1 = n;

if (n < 0)
{
_putchar('-');
n1 = -n;
}

if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
