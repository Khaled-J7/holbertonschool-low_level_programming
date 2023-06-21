#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print all alpha
 *
 * Return: 0
*/
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
return(0);
}
