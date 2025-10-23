// manual swap of two numbers
/*
#include <stdio.h>

\\Write a program to swap two numbers using a third variable

int main(){
	int a = 10,b = 25,temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d\n",a);
	printf("%d\n",b);
}
*/

// Ask user to swap 
#include <stdio.h>
int main() {
	int num1, num2, temp;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("\nAfter swapping:-\n");
	printf("first number = %d\n", num1);
	printf("second number = %d\n", num2);
	return 0;
}
