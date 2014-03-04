#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int spawn (char* program, char** arg_list){
	
	pid_t child_pid;
	
	child_pid = fork ();
	
	if(child_pid != 0){

		printf("Hola soy el papa.\n");
		return child_pid;
		}
	else{

		execvp(program, arg_list);

		fprintf(stderr, "A ocurrio un error payo.\n");
		abort ();
	}
}

int main (){

	char* arg_list[] = {
		"ls",
		"-l",
		"/",
		NULL
	};

	spawn("ls", arg_list);
	printf("Ejecutando un segundo hilo con un programa chacho.\n");


	return 0;
}


