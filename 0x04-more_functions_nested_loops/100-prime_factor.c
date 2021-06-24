#include <stdio.h>
/**
 * main -find max prime factor
 * Return: 0
 */
int main(void)
{
int i = 612852475143;
int n, max = -1;
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
powax = n;
}
printf(max);
return (0);
}
