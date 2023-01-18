#include <stdio.h>

#define PRINT(i) (i<2 ? printf("ok"): printf("false"))

int main(int argc, char *argv[]) {
	
	int i=3;
	PRINT(i);
	
	return 0;
}

