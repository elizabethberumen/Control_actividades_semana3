#include <stdio.h>

struct st
{
	int x;
	int y;
};

int main(int argc, char *argv[]) {
	
	struct st x1={x1.x=1,x1.y=2};
	
	printf("%d %d\n", x1.x, x1.y);
	
	printf("%d\n", sizeof(struct st));
	
	return 0;
}

