#include <stdio.h>
/**
 * main - print 1 to 100
 * return: 0
 */
void main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0)
printf("%s ", "Fizz");
else if (i % 5 == 0)
printf("%s ", "Buzz");
else if (i % 3 == 0 && i % 5 == 0)
printf("%s ", "FizzBuzz");
else
printf("%d ", i);
}
}
