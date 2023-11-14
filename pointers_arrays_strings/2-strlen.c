#include "main.h"

/**
 *_strlen - Write a function that return the length of a strinng
 * @s: char type variable
 * Return: Returns the length of a string (int)
 */
int _strlen(char *s)
{
int i = 0;

for (i = 0; s[i] != '\0');

i++;

return (i);

}
