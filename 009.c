#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int c = 5, no = 10;
	do {
		no /= c;
	} while(c--);
	
	printf ("%dn", no);
	
	
	return 0;
}

