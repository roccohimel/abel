#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
	printf("\n                              Todo:                                ");
	printf("\n===================================================================");
	system("\nls -1 /usr/local/lib/todo-tasks");
	printf("\n===================================================================");
	printf("\nType [a] to add a task, type [r] to remove a one, Type [q] to quit.");
	while (1) {
		char pmt0[2]
		printf("\n> ");
		scanf("%1s", pmt0);
		if (pmt0 == "a") {
			char pmtA[101];
			printf("\nTask: ");
			scanf("%100s", pmtA);
			char cmdA[135];
			sprintf(cmdA, "sudo touch '/usr/local/lib/todo-tasks/%s'", pmtA);
			system(cmdA);
		}
		if (pmt0 == "r") {
			char pmtR[101];
			printf("\nRemove task: ");
			scanf("%100s", pmtR);
			char cmdR[135];
			sprintf(cmdR, "sudo rm '/usr/local/lib/todo-tasks/%s'", pmtR);
			system(cmdR);
		}
		if (pmt0 == "q") {
			return 0;
		}
	}
	return 0;
}


