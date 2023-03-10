#include<stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: contains the number of arg
 * @argv: the array that contains the arg of the command line
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	for (i; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

