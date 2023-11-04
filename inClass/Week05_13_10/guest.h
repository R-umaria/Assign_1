#pragma once

#include<string.h>

#define NAMESIZE	80

typedef	struct guest {
	char name[NAMESIZE];
}GUEST;	//alias or also known as 

// C
GUEST CreateGuest(char* Name);

void DestroyGuets(GUEST g);
