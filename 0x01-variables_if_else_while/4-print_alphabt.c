#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'Z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}

