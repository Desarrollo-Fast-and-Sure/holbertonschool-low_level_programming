#include "main.h"
/**
 *jack_bauer - Functionnthat prints every minute of the day of
 *jack bauer, starting from 00:00 to 23:59
 *
 *Return: void
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar((':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');		
		}
	}
}

