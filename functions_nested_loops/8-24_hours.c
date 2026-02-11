#include "main.h"

/**
 * jack_bauer - lotta times eh
 *
 * Return: new time
 */

void jack_bauer(void)
{
	int min10;
	int min1;
	int hour10;
	int hour1;

	for (hour10 = 0; hour10 <= 2; hour10++)

		for (hour1 = 0; hour1 <= 9; hour1++)

			if ((hour10 <= 1 && hour1 <= 9) || (hour10 <= 2 && hour1 <= 3))

				for (min10 = 0; min10 <= 5; min10++)

					for (min1 = 0; min1 <= 9; min1++)
					{
						_putchar('0' + hour10);
						_putchar('0' + hour1);
						_putchar(':');
						_putchar('0' + min10);
						_putchar('0' + min1);
						_putchar('\n');
					}
}
