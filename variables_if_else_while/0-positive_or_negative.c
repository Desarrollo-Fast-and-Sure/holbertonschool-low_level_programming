#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 17  * main - Entry value 
 18  *
 19  * Return: always 0 (Success)
 20  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is cero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);

} 

