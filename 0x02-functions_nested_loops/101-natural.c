#include <stdio.h>
/**
 * main - the sum of multiple of 3 or 5
 * Return: 0
 */
int main(void)
{
int i, sum = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum = sum + i;
}
i++;
}
printf("%d\n", sum);
return (0);
}
