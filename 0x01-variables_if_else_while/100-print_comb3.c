#include <stdio.h>

/**
 * main - prints all possible combinations of two digit words
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int digit_1;
	int digit_2;

	for (digit_1 = 0; digit_1 <= 8; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= 9; digit_2++)
		{
			putchar((digit_1 % 10) + '0');
			putchar((digit_2 % 10) + '0');
			if (digit_1 == 8 && digit_2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
