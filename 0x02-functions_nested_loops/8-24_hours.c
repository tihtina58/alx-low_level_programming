#include "holberton.h"
/**
 * jack_bauer - print time
 */
void jack_bauer(void)
{
int hr;
int min;
int hrr;
int minn;
for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
minn = min % 10;
hrr = hr % 10;
_putchar(hr / 10 + '0');
_putchar(hrr + '0');
_putchar(':');
_putchar(min / 10 + '0');
_putchar(minn + '0');
_putchar('\n');
}
}
}
