#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerc;
	char upperc;

	for (lowerc = 'a'; lowerc <= 'z'; lowerc = lowerc + 1)
	{
		putchar(lowerc);
	}
	for (upperc = 'A'; upperc <= 'Z'; upperc = upperc + 1)
	{
		putchar(upperc);
	}
	putchar('\n');
return (0);
}
