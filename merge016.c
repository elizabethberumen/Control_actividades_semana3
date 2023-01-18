#include <stdio.h>
#define f(g,g2) g##g2

int main(int argc, char *argv[]) {

	int var12=100;
	printf("%d",f(var,12));
	return 0;
}

