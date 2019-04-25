#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int main(){
	
	pid_t process = fork();
	
	if(process > 0){
		printf("Filho: %d Pai %d\n", getpid(), getppid());	
		sleep(15);
	}else{
		if(fork() == 0){
			printf("Filho: %d Pai: %d\n", getpid(), getppid());
		}
	}
	
	printf("Morreu: %d", getpid());
	return 0;
}
