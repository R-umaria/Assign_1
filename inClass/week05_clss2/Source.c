#include<stdio.h>
#include<string.h>
#define MAXSIZE	5


void PrintArray(int arr[]) {
	printf("size of array; %d\n", sizeof(arr));
	for(int i = 0; i < sizeof(arr); i++);
	printf("%c", arr[i]);
	printf("\n");
}

int main(void) {

	int arr[MAXSIZE] = {[0]=1,[1]=2,[2]=3,[3]=4, [4]=5};

	printf(" in main: size of array; %d\n", sizeof(arr));
	PrintArray(arr);
	return 0;
}