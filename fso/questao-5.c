#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int main(){
	int status;
	printf("%d\n", getpid());

	int a = fork();
	if(a == 0){
		printf("A - B\n");
	}
	else{
		if(fork()){
			printf("A - C\n");

			if(fork() == 0){
				printf("C - E\n");
			}
		}else if(fork() == 0){
			printf("A - D\n");
			if(fork() == 0){
				printf("D - F\n");
			}
			else if(fork() == 0){
				printf("D - G\n");
			}
		}
	}
	sleep(10);
}
