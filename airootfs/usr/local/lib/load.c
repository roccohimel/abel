
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main() {
	int mb;
	printf("\nMegabytes: ");
	scanf("%d", &mb);
	int initMb = mb;
	mb = mb * 1024 + 1;
	while (mb > 1) {
		putchar('0');
		mb -= 1;
	}
	printf("\nLoaded %d megabytes\n", initMb);
	return 0;
}
