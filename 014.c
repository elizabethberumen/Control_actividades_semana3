#include <stdio.h>

union test {
	int x;
	char arr[4];
	int y;
};

int main(int argc, char *argv[]) {
	
	union test t;
	t.x=0;
	t.arr[1]='G';
	
	for(int i=0;i<4;i++){
		printf("valores en el array %c '\n",t.arr[i]);
	}
	
	return 0;
}

