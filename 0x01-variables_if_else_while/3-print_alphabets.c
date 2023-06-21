#include <stdio.h>
/**
 * main - A program that prints the alphabet.
 * Return: Always 0 (Success).
 */
int main(void);
{
	char c;
	char D;

	c = 'a';
	D = 'A';
	while (c <= 'z'){
		putchar(c);
		c++;
	}
	while (D <= 'Z'){
		putchar(D);
		D++;
	}
	Putchar('\n');
return (0);
}
