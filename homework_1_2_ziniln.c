#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Usage: <command>\n");
		exit(1);
	}
	
	char *command = argv[1];
	system(command);
	return 0;
}
