#include <stdio.h>

int power(int x, int y){
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int main(){
  // S = 1 + 3/2 + 5/4 + 7/8 + 9/16 + ... 39/x

  int i = 0, x = 19;
  float sum = 0.0;
  for(i; i < x; i++){
    sum += (float) (1+(2*i))/(power(2, i));
  }

  printf("%.2f\n", sum);

  return 0;
}
