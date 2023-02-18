#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by ifytony
 * Return: 0
*/
int main(void)
{
	char;
	int;
	long int;
	long long int;
	float;

	prinf("Size of char: %zu bytes\n", sizeof(char));
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("size of long int: %zu bytes\n", sizeof(long int));
	printf("size of float: %zu bytes\n", sizeof(float));

	return 0;
}
