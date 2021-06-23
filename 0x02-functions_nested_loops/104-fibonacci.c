#include <stdio.h>
/**
 * numLength - return length of string
 * @num: integer to be tested
 * Return: number of digit
 */
int numLength(int num)
{
int length = 0;
if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
length += 1;
}
return length;
}
/**
 * main - prints the first 98 sequences
 * Return: 0
 */
int main(void)
{
unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f10 = 0, f20 = 0, tmp0 = 0;
short int i = 1, initial0s;
while (i <= 98)
{
if (f10 > 0)
{
printf("%lu", f10);
}
initial0s = numLength(mx) - 1 - numLength(f1);
while (f10 > 0 && initial0s > 0)
{
printf("%i", 0);
initial0s--;
}
printf("%lu", f1);
tmp = (f1 + f2) % mx;
tmp0 = f10 + f20 + (f1 + f2) / mx;
f1 = f2;
f10 = f20;
f2 = tmp;
f20 = tmp0;
if (i != 98)
{
printf(", ");
}
else
{
printf("\n");
}
i++;
}
return (0);
}
