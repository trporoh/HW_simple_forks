#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char** argv) {

	pid_t processes[3];

	processes[0] = fork();
	if (processes[0] == 0) {
		printf("%d right pid\n", getpid());
		processes[1] = fork();
		if (processes[1] == 0) {
			printf("%d right down  pid\n", getpid());
			exit(5);
		}
		else {
			exit(5);
		}
	}
	else {
		processes[2] = fork();
		if (processes[2] == 0) {
			printf("%d left child pid\n", getpid());
		}
		else {
			printf(" %d, left smallest pid\n", getpid());
		}
	}

	return 0;
}