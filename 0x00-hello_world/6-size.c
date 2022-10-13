#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("Size of int %lu", (unsigned long)sizeof(a));
	printf("Size of char %lu", (unsigned long)sizeof(b));
	printf("Size of long int %lu", (unsigned long)sizeof(c));
	printf("Size of long long int %lu", (unsigned long)sizeof(d));
	printf("Size of float %lu", (unsigned long)sizeof(f));
	return (0);
}
