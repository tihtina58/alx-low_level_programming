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
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else
printf("%d ", i);
}
}
