#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print the name of the executable file
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0 for succesful exit
 */
int main(int argc, char *argv[])
{
int mul;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
