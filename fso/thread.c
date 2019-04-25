#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <pthread.h>

int set[100], n_ticket;
int r;

void *get_ticket(){
  int j;

  for(j = 0; j < 100; j++){
    if(set[j] == 0){
      n_ticket = j;
      set[j] = -1;
      break;
    }
  }

  printf("Peguei o ticket %d\n", n_ticket);

  if(j == 99){
    printf("Não existem tickets suficientes.\n");
    r = -1;
  }else{
  	r = n_ticket;
  }

  pthread_exit(NULL);
}

void *return_ticket(){
	if(r != -1){
    if(set[r] == -1){
			printf("Retorna o ticket %d\n", r);
      set[r] = 0;
    }
  }
	pthread_exit(NULL);
}

int main(){
  memset(set, 0, sizeof set);
	time_t t;
	pthread_t tas[2];
  pthread_t threads[4];
	int i = 1, r, res[4], j = 1;

  srand((unsigned) time(&t));

  for(i =1; i < 100; i++){
    pthread_create(&threads[0], NULL, get_ticket, NULL);
		sleep(1);
    pthread_create(&threads[1], NULL, get_ticket, NULL);
		sleep(1);
		pthread_create(&threads[2], NULL, return_ticket, &j);
		sleep(1);
  }

  return 0;
}
