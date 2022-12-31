#include <stdio.h>

void main()
{
	unsigned long int fib1 = 0, fib2 = 1, fib3, num, count = 0;

	printf("Enter the value of num \n");
	scanf("%ld", &num);
	printf("First %ld FIBONACCI numbers are ...\n", num);
	printf("%ld\n", fib1);
	count = 2;
	while (count < num)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%ld\n", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
}
