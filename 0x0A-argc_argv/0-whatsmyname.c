#include <stdio.h>

/**
 * main - Print the name of the program
 * @argic: Count arguments
 * @argv: Arguments
 * You should not removethe path before the name of the program 
 *
 * REturn: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argc[0]);

	return (0);
}
