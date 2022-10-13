#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeof(a));
	printf("Size of int: %ld bytes(s)\n", sizeof(b));
	printf("Size of long int: %ld bytes(s)\n", sizeof(c));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(d));
	printf("Size of float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
