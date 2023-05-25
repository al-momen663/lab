// lab assignment 1
#include <stdio.h>

void main()
{

	// Declearing input variable
	int a, b;
	int choice; // declearing choice variable

	printf("Input first number: ");
	scanf("%d", &a); // getting input 1 from user

	printf("Input secound number: ");
	scanf("%d", &b); // getting input 2 from user

	printf("Enter your choice (1 for addition and 2 for multiplication): ");
	scanf("%d", &choice); // getting choice from user

	switch (choice)
	{
	case 1:
		printf("Addition of two numbers: %d\n", a + b); // processing data from choice and show output

		break;
	case 2:
		printf("Multiplication of two numbers: %d\n", a * b); // processing data from choice and show output

	default:
		printf("0\n"); // default result
		break;
	}
}