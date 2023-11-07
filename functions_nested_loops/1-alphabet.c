#include "main.h"

/**
 *Print_alphabet - Funtion that prints the alphabet, in lowercase
 *Return: Always void
 */
void print_alphabet(void);

{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
	_putchar(letters);
	}
	_putchar('\n');
}
