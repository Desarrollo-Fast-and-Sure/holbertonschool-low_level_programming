#include "main.h"
#include <stdio.h>
/**
 *times_table - Function that prints the 9 times table, starting with 0
 *
 *Return: void
 */
void times_table(void)
{
	int n1, n2;
	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{	
			result = n1 * n2;
			if (n2 == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d, ", result);
				if (n2 != 9)
					printf(", ");
			}		
		}
	printf("\n");
	}
}

