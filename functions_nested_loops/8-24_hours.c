#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* '0' = ASCII 48 */
			_putchar('0' + (hour / 10)); /* affiche les dizaines des heures */
			_putchar('0' + (hour % 10)); /* affiche les unites des heures */
			_putchar(':');
			_putchar('0' + (minute / 10)); /* affiche les dizaines des minutes */
			_putchar('0' + (minute % 10)); /* affiche les unites des minutes */
			_putchar('\n');
		}
	}
}
