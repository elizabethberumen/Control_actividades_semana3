#include <stdio.h>

#define ISEQUAL(X, Y) X == Y


int main(int argc, char *argv[]) {
    #if ISEQUAL(X, 0)
	    printf("Geeks");
    #else
	    printf("Quiz");
    #endif
	
	return 0;
}

