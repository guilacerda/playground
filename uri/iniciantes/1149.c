#include <stdio.h>

int main(){
  int a, b, i = 0, j = 0;

  scanf("%d", &a);

  while(1){
    scanf("%d", &b);

    if(b > 0)
      break;
  }

  for (i; i < b; i++) {
    j += a;
    a++;
  }

  printf("%d\n", j);
  return 0;
}
