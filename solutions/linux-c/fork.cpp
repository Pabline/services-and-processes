#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	pid_t child_pid;

	printf("El ID de este programa es %d\n", (int) getpid ());

	child_pid=fork();
	if(child_pid!=0){
		printf("Este es el prceso padre con el PID %d\n", (int) getpid ());
		printf("El ID del proceso hijo es %d\n", (int) child_pid);

	}
	else
		printf("Este es el proceso hijo, con el ID %d\n", (int) child_pid);

	return EXIT_SUCCESS;
}


