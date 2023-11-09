#include "main.h"
  2 
  3 /**
  4  *swap_int  - Write a function that takes a pointer to an int as parameter
  5  * @n: input
  6  * Return: n.
  7  */
  8 
  9 void swap_int(int *a, int *b)
 10 {
 11         	int aux;
 		
 		aux = *a;
		*a = *b;
		*b = aux;
 12 }

