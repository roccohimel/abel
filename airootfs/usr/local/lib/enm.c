// the Easy Network Manager Tool
// Copyright (C) Rocco Himel
// Made for ABEL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
	// "buttons" and stuff
	printf("\n  ENM  ");
	printf("\n=======");
	printf("\n[1] Turn wifi on");
	printf("\n[2] Turn wifi off");
	printf("\n[3] Connect to network");
	printf("\n[4] Quit ENM");
	while (1) {
		int pmt;
		printf("\n> ");
		scanf("%d", &pmt); // if it doesnt work rm the comma
		if (pmt == 1) {
			system("nmcli radio wifi on");
		}
		if (pmt == 2) {
			system("nmcli radio wifi off");
		}
		if (pmt == 3) {
			system("nmcli dev wifi");
			char pmt1[101];
			printf("\nSSID: ");
			scanf("%100s", pmt1);
			char cmd[125];
			sprintf(cmd, "nmcli dev wifi connect '%s'", pmt1);
			system(cmd);
		}
		if (pmt == 4) {
			return 0;
		}
	}
}
