#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
	printf("\n");
	int it = 0;
	while (1) {
		it += 1;
		printf("%d, ", it);
		fflush(stdout);
		sleep(1);
	}
	return 0;
}
