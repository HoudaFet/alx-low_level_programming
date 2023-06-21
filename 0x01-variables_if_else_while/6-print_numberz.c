#include <stdio.h>
/**
 * main - A program that prints all single digit numbers
 * Return: Always 0
 */
int main(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar("\n");
	return (0);
}
