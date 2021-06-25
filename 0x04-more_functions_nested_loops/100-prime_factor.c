#include <stdio.h>
#include <math.h>
/**
 * main -find max prime factor
 * Return: 0
 */
int main(void)
{
unsigned int long i = 612852475143, max = -1;
int n;
while (i % 2 == 0)
{
max = 2;
i = i / 2; 
}
for (n=3; n <= sqrt(i); n = n + 2)
{
while (i % n == 0)
{
max = n;
i = i / n;
}
}
if (i > 2)
{
max = i;
}
printf("%lu\n", max);
return (0);
}
