#include "main.h"

/**
  *_islower - Function that checks for lowercase character.
  *@c: Declare integer variable
  *Return: 1 if c is lowercase, 0 othercase.
  */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


