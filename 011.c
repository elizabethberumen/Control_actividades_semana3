#include <stdio.h>

typedef struct {
	short s[5];
	
	union{
		float y;
		long z;
	}u;
}t;

int main(int argc, char *argv[]) {
	
	printf("Este es el valor en bytes: %d\n", sizeof(t));
	
	
	
	return 0;
}

