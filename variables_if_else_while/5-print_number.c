#include <stdio.h>

/** main - Write a program that prints all single digit numbers of base 10.
 *Return: Always 0
 */

int main(void)
{
	int p = 0;

	while(p < 10)
	{
		printf("%d", p);
	p++;
	}
	printf("\n");
	return(0);
}
