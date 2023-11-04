#include <stdio.h>
/**
*main - Program that prints teh alphabet in lowercase and then in uppercsase
*Return: return (0).
*/
int main(void)

{ 
char letters; /* variable is declared to represent a letter */
/* Prints lowercase letters from 'a' to 'z' */

for (letters = 'a'; letters <= 'z'; letters++)  
{
/* conditional which excludes the letters q and e */
if  (letters ! = 'q' && letters ; letters != 'e')
{

	putchar(letters);
}

}
putchar('\n'); /* line break */
return (0);
} 
