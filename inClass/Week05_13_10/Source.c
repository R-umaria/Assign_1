//in class dated:
// 13/10/2023	-	Friday


#include <stdio.h>
#include"guest.h"

int main(void) {
	GUEST g = CreateGuest("My special Friend");

	DebugPrint(g);

	SaveGuestToDisk(g, "guest.dat");

	GUEST h = LoadGuestFromDisk("guest.dat");

	DestroyGuest(g);
	DestroyGuest(h);

	return 0;
}