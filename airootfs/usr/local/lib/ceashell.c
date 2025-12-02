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

void addto(line) {
	char addtoCmd[1001];
	sprintf(addtoCmd, "echo '%s' >> %s/csh-repl.c", line, file);
	system(addtoCmd);
}

void exe() {
        addto("}")
	char exeCmd[61];
        sprintf(exeCmd, "%s/csh-comp", file);
        system(exeCmd);
}

int main() {
	printf("Starting csh...");
	rm();
	while (1) {
		make();
		addto("#include <stdio.h>");
		addto("#include <stdlib.h>");
		addto("#include <unistd.h>");
		addto("#include <string.h>");
		addto("int main() {");
		char pmt[101];
		printf("ceashell> ");
		scanf("%s", pmt);
		addto("        %s", pmt);
		comp();
		exe();
		rm();
	}
}
