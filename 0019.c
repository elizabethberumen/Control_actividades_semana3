#include <stdio.h>

union test
{
	int x;
	char arr[4];
	int y;
};

int main(int argc, char *argv[]) {

	union test t;
	t.x = 0;
	t.arr[1] = 'G';
	printf("%c", t.arr[1]);
	return 0;
	
	return 0;
}

