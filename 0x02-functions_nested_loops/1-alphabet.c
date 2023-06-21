#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char alp = 'a';

	for ( ; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
