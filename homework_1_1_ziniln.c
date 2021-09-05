#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 	Exponential growth of number of processes: total number = 2^n, where n - parameter.
*/
int main(int argc, char **argv) {
	int n;
	int seconds;
	int i;
	int pid;

	if (argc == 1) {
		n = 5;
		seconds = 5;
	} else if (argc == 3) {
		n = atoi(argv[1]);
		seconds = atoi(argv[2]);
	} else {
		printf("Usage:\n1) without parameters (n = 5, seconds = 5)\n2) <n> <seconds>\n");
		exit(1);
	}
	printf("n=%d seconds=%d\n", n, seconds);

	for (i = 0; i < n; i++) {
		pid = fork();
		if (pid == 0) {
			printf("New process was created!\n");
		}
		sleep(seconds);
	}

	return 0;
}
