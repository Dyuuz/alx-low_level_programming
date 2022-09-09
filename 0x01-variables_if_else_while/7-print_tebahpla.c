#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int lower;

for (lower = 'z'; lower = 'a'; lower + 1)
{
	putchar(lower);
}
	putchar('\n');
	return (0);
}
