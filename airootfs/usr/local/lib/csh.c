#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char file[51] = "~/abel/airoot/usr/local/lib/tmp";
void make() {
	char makeCmd[61];
	sprintf(makeCmd, "sudo touch %s/csh-repl.c", file);
	system(makeCmd);
}

void rm() {
	char makeRmCmd[56];
	char compRmCmd[56];
	sprintf(makeRmCmd, "sudo rm %s/csh-repl.c", file);
	sprintf(compRmCmd, "sudo rm %s/csh-comp", file);
	system(makeRmCmd);
	system(compRmCmd);
}

void comp() {
	char compCmd[201];
	sprintf(compCmd, "gcc %s/csh-repl.c -o %s/csh-comp", file);
	system(compCmd);
}

void exe() {
	char exeCmd[61];
	sprintf(exeCmd, "%s/csh-comp");
	system(exeCmd);
}

int main() {
	make();
	
