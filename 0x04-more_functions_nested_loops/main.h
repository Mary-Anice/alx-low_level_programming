int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);


root@1117a48d8d29:/alx-low_level_programming/0x04-more_functions_nested_loops# cat> 0-isupper.c
#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

root@1117a48d8d29:/alx-low_level_programming/0x04-more_functions_nested_loops# git add .
root@1117a48d8d29:/alx-low_level_programming/0x04-more_functions_nested_loops# git commit -m "Task O isupper"
root@1117a48d8d29:/alx-low_level_programming/0x04-more_functions_nested_loops git push
