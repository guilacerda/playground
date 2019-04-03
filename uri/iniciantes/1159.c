#include <stdio.h>

int main(){
  int x = 1, sum = 0, i;
  long n;

  while(1){
    scanf("%ld", &n);

    if (n == 0)
      break;

    while(1){
      if (n % 2 == 0){
        sum += n;
        n += 2;
        x++;

        if (x == 6) {
          break;
        }
      }
      else
        n++;
    }

    printf("%d\n", sum);
    sum = 0;
    x = 1;
  }

  return 0;
}
