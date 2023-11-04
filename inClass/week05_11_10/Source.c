//alternative to scanf

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAXSIZE	12


/// <summary>
/// note:
/// </summary>
/// <returns></returns>
int GetAnIntFromTheUser() {
	char buff[MAXSIZE];
	fgets(buff, MAXSIZE, stdin);
	
	return atoi(buff);
	
}

int main(void) {
	int a;

	while (a = GetAnIntFromTheUser() > 0) {
		
		fprintf(stderr, "error, retry...");
	}
	// a is ready to be used	
}