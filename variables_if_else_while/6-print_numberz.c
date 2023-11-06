#include<stdio.h>
/**
*main - Prints a string with single digit numbers
*Return: return (0).
*/
int main(void)
{
int n = 48;
/* It is declared with the value 48 of the ASCII code */
/* when is equivalent to 0 */
while (n <= 57)
{
putchar(n);
n++;
}
putchar("\n");
return (0);
}

