#include <stdio.h>

struct site
{
	char name;
	int no_of_pages;
};

int main(int argc, char *argv[]) {
	
	
	struct site *ptr;
	ptr->no_of_pages=2;
	ptr->name='x';
	printf("%d ", ptr->no_of_pages);
	printf("%c", ptr->name);
	getchar();
	
	return 0;
}

