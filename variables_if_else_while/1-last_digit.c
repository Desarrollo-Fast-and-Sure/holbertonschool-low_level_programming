#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - C Prints last digit
*
* Return: always 0 (Success)
*/
int main(void)
{
int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit  > 5)
	{

	printf("last digit of %d and is greater than 5\n", n, last_digit);
	}

	else if (last_digit  == 0)
	{	
	printf("last_digit of %d is %d and is 0\n", n, last_digit);
	} 

	else

        {	

	printf("last_digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
        }  
	return (0);

}

