#include <stdio.h>
/**
 * main - main function to print program name
 *
 * argc : integer argument size
 *
 * argv : array of arguments
 *
 * Return : zero(0)
 */

int main (int argc, char* argv[])
{
	(void)argc;
	printf("%s\n",argv[0]);
	return 0;
}
