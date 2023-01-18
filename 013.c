#include <stdio.h>
#include <stdint.h>


union test {
	char x;
	uint32_t arr;
	char y[10];
};
int main(int argc, char *argv[]) {
	
	printf("%d", sizeof(union test));
	return 0;
}

