#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
	// main vars right here man
	int x = 1;
	int y = 1;
	char it[2] = "e";
	
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
	printf("%1s\n", it);
	while (resty > 0) {
		printf("\n");
		resty -= 1;
	}
	return 0;
}
