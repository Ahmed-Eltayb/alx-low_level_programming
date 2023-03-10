#include<stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: contains the number of arg
 * @argv: the array that contains the arg of the command line
 * Return: 0
 */
int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}

