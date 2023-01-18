#include <stdio.h>

struct point{
	int x,y,z;
};

int main(int argc, char *argv[]) {
	struct point p1;
	p1.y=0;
	p1.z=1;
	p1.x=2;
	printf("%d %d %d", p1.x, p1.y, p1.z);

	
	return 0;
}

