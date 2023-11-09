#include "main.h"

/**
 *swap_int  - Write a function that takes a pointer to an int as parameter
 * @n: input
 * Return: n.
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
