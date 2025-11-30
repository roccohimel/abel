#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
// Clex! (Clone / Make it executable!)
// This program is basicly chmod +x but with more steps
// Copyright (C) Rocco Himel
void cli() {
	printf("\nClex!");
	printf("\n=====");
	char file[101];
	printf("\nFile path: ");
	scanf("%100s", file);
	char copyto[101];
	printf("\nCopy to (include new name!): ");
	scanf("%s100s", copyto);
	printf("\nPlease wait... ");
	char cmd1[212];
	sprintf(cmd1, "cp %s %s", file, copyto);
	char cmd2[212];
	sprintf(cmd2, "chmod +x %s", copyto);
	system(cmd1);
	system(cmd2);
	printf("Done!\n");
}
int main() {
	cli();
	return 0;
}
