#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
void waitae(){
	int status;

	wait(&status);
}

void printae(){
	printf("Pai: %d, Filho: %d\n", getppid(), getpid());
}

int main(){
	printae();
	waitae();
	if(fork() == 0){
		waitae();
		printae();
		waitae();
	}else if(fork() == 0){
		waitae();
		printae();
		waitae();
	}else if(fork() == 0){
		waitae();
		printae();
		waitae();
		if(fork() == 0){
			waitae();
			printae();
		}else if(fork() == 0){
			waitae();
			printae();
			waitae();
		}else if(fork() == 0){
			waitae();
			printae();
			waitae();
			waitae();
			if(fork()==0){
				waitae();
				printae();
				waitae();
			}
			waitae();
		}
	}else if(fork() == 0){
		waitae();
		printae();
		waitae();
	}
	
	sleep(10);
	return 0;
}
