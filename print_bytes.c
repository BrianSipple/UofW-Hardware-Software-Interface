/* Brian Sipple

	This is a c program for printing bytes

*/

#include <stdio.h>
#include <stdlib.h>


int myfunc(int a) {
	printf("Google!\n");
	return 0;
}


int main(int argc, char *argv[]) {

	int num = 4058;
	
	myfunc(num);

	printf("Here are the bytes of %d in hex: %08x\n", num, num);

	int i;
	unsigned int mask = 0xFF;
	for (i = 0; i < sizeof(int); i++) {
		int printme = (num >> 8*i)&mask;
		printf("\t byte%d = %02x\n", i, printme);
	}

	return 0;
}

