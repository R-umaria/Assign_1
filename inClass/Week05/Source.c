// playing around with swap by value, pass by reference
// Programing Principles - week05
// Rishi Umaria	- Fall - 23

#include <stdio.h>

void swap(int* a, int* b) {	// *= the value at 
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int a = 3;
	int	b = 5;

	printf("Before: == %d (should be 3), b==%d (should be 5)\n", a, b);
	swap(&a, &b);	//	& = the address 0f

	printf("after: a== %d (should be 5), b==%d (should be 3)\n", a, b);
}