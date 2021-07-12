#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * checkint - check if it is integer
 * @str: Argument count
 * Return: 0 for succesful exit
 */
int checkint(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (!isdigit(str[i]))
{
return (0);
}
i++;
}
return (1);
}
/**
 * main - Print the name of the executable file
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0 for succesful exit
 */
int main(int argc, char *argv[])
{
int sum = 0, i;
for (i = 1; i < argc; i++)
{
if (checkint(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("%s\n", "Error");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
