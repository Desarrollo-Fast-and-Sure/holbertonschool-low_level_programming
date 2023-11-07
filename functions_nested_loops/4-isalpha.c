#include "main.h"

/**
 *_isalpha - Function that checks for alphabetic character.
 *@c: Declare integer variable
 *Return: 1 if c is lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
