#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
	int x;
	int y;
	char it[2];
	printf("\nx: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	printf("char: ");
	scanf("%1s", it);
	x = x - 1;
	y = y - 1;
	int resty = 65 - y; // input max y
	system("clear");
	while (y > 0) {
		printf("\n");
		y -= 1;
	}
	while (x > 0) {
		printf(" ");
		x -= 1;
	}
	printf("%s\n", it);
	while (resty > 0) {
		printf("\n");
		resty -= 1;
	}
	return 0;
}
