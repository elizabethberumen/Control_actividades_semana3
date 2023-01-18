#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i = 1024;
	for (; i; i >>= 1)
		printf("GeeksQuiz");
	
	return 0;
}

