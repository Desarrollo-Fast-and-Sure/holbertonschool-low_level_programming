#include <stdio.h>
/**
*main - C Using putchar funtion
*Return: return (0).
*/
int main(void)
{
	char alphabet;

	alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z');
		
		putchar(alphabet);
		alphabet++;
	
		putchar('\n');
	return (0);
}
