#include<stdio.h>
/**
*main - Prints a string with single digit numbers
*Return: return (0).
*/
int main(void)
{
int n = 0;
/* loop to print the digits from 0 to 9 */
/* Every time n is less than 10 it will continue to iterate */
while (n < 10)
{
putchar("%d", n);
n++;
}
putchar("\n");
return (0);
}

