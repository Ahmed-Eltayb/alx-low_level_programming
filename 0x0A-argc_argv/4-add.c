#include<stdio.h>
#include<stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: contains the number of arg
 * @argv: the array that contains the arg of the command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) && !atoi(argv[i]) != 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
