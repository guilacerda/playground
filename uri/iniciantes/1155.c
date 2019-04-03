#include <stdio.h>

int main(){

  int i = 0;
  float sum = 0.0;

  for(i; i < 100; i++){
    sum += (float) (1.0/(i+1.0));
  }

  printf("%.2f\n", sum);

  return 0;
}
