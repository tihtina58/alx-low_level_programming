#include <stdio>

/**
 *main - print a-z in lower case
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 'A'; i <= 'Z'; i++)
{
putchar(tolower(i));
}
return (0);
}
