#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int main(){
	
	printf("Pai TOPPER: %d\n", getpid());
	
	if(fork() == 0){	
		if(fork() == 0){
			printf("Pai1: %d Filho:%d\n", getppid(), getpid());

		}else{
			printf("Pai2: %d Filho:%d\n", getppid(), getpid());		
		}
	}else{
		if(fork() == 0){
			printf("Pai3: %d Filho:%d\n", getppid(), getpid());
		}else{
			printf("Pai4: %d Filho:%d\n", getppid(), getpid());
		}
	}

	sleep(10);
// 			PAI
//		PAI		FILHO
//
//
	return 0;
}
