// C program to implement
// the above approach
#include <stdio.h>

// Driver code
int main()
{
	printf("Hello World\n");

	double myAge = 43.1004;     // A variable
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
	printf("%f years old\n", *ptr);	


	scanf("%lf", &myAge); // Read a double value from the user and store it in myAge

	// Output the value of myAge
	printf("%f years old\n", myAge);

	char name[20];
	scanf("%s", name); // Read a string from the user and store it in name
	// Output the string		
	printf("Hello %s\n", name);


	return 0;
}