// C program to implement
// the above approach
#include <stdio.h>

// Driver code
int main()
{
	printf("Hello World\n");

	char myChar = 3325522;  // A variable

	double myAge = 43.10000004;     // A variable
	double* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

	// Output the value of myAge (43)
	printf("%f years old\n", myAge);
	
	// Size of myAge (8)
	printf("%lu bytes\n", sizeof(myAge));

	// Output the memory address of myAge (0x7ffe5367e044)
	printf("%p\n", &myAge);
	// Output the memory address of myAge with the pointer (0x7ffe5367e044)
	printf("%p\n", ptr);	
	// Dereference: Output the value of myAge with the pointer (43)
	printf("%f years olda\n", *ptr);	
	return 0;
}