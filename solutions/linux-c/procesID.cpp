#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

printf('The process ID is %i\n', getpid ());

printf('The parent process ID is %i\n', getppid ());

	return 0;
}


