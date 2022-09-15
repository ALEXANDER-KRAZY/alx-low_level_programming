#include "main.h"
/**
 * print_alphabet_x10 - prins 10 times the alphabet, in lowercase
 * Retun: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}
}

