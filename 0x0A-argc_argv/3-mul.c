#include<stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: contains the number of arg
 * @argv: the array that contains the arg of the command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
