#include <stdio.h>

/** 
 *main - 2 digit combination
 *
 *Return :0
 */
int main(void)
{
int i,j;
for (i = '0'; i <= '9'; i++)
{
for (j = i+1; j <= '9'; j++)
{
putchar(ij);
if (i != '8' && j != '9')
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}