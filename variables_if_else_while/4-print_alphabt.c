#include<stdio.h>
/**
*main - Program that prints the alphabet and the letter 'q' excludes 'e'
*Return: return (0).
*/
int main(void)
{
char letters;
/* variable is declared to represent a letter */
/* Prints lowercase letters from 'a' to 'z' */
for (letters = 'a'; letters <= 'z'; letters++)
{

/* Conditional which excludes the letters q and e */
if (letters != 'q' && letters != 'e')
 
	{
putchar(letters);
	}
}
putchar('\n'); /* line break */
 
return (0);
}

