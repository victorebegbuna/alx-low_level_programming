#include<stdio.h>

/**
 * main - print possible combination of two 2-digit
 * numbers
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int i, p;

	for (i = 0; i <= 99;)
	{
		for (p = 0; p <= 99;)
		{
			if (p != i)
			{
				putchar((i / 10) + '0');

				putchar((i % 10) + '0');

				putchar(' ');

				putchar((p / 10) + '0');

				putchar((p * 10) + '0');

				if (i != 98 || p != 98)

				{
					putchar(',');

					putchar(' ');

				}
			}
			++p;
		}
		++i;
	}

	putchar('\n');

	return 0;

}


