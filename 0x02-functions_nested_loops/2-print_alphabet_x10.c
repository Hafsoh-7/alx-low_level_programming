#include "main.h"

/**
 * main - print 10 times in alphabet,in lowercase
 */
void print_alphabet_x10(void);
{
	char ch;
	int 1;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
