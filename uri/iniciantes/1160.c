#include <stdio.h>

int main(){
  int i, n, a, b, j = 0;
  double ca, cb;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d %d %lf %lf", &a, &b, &ca, &cb);
    ca = 1.0 + (ca/100.0);
    cb = 1.0 + (cb/100.0);
    while(1){
      if(a > b || j > 100)
        break;

      a *= ca;
      b *= cb;
      j++;
    }

    if(j <= 100)
      printf("%d anos.\n", j);
    else
      printf("Mais de 1 seculo.\n");
    j = 0;
  }

  return 0;
}
