#include <stdio.h>

#define EVEN 0
#define ODD 1

int main(int argc, char *argv[]) {
	
	int i = 3; //0011 & 0001 = 0001
	switch (i & 1)
	{
	case EVEN: printf("Even");
	break;
	case ODD: printf("Odd");
	break;
	default: printf("Default");
	}
	
	return 0;
}

