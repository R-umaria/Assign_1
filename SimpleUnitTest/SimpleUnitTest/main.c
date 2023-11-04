#include<stdio.h>
#include "main.h"

//REQ_001:	The system shall be capable of adding 2 integer numbers together 

int main(){

	printf("Hello World!");

	return 1;
}

int Add(int x, int y)
{
	int Sum = 0;
	Sum = x + y;
	return Sum;

}