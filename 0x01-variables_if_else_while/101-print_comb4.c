#include <studio.h>

/**
 * main - prints all possible different combination of three digits
 * Return: 0
 */
int main(void)
{
	int n, m, l;

	for (n = 48; m < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (1 = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar("\n");
	return (0);
}
