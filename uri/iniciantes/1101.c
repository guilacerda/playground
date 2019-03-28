#include <stdio.h>

int main(){
	int a, b, sum = 0;

	while(1){
		scanf("%d%d", &a, &b);

		if(b <= 0 || a <= 0) 
			break;

		if(a < b){
			for(a; a <= b; a++){
				printf("%d ", a);
				sum += a;
			}

			printf("Sum=%d\n", sum);
			sum = 0;
		}
		else {
			for(b; b <= a; b++){
				printf("%d ", b);
				sum += b;
			}

			printf("Sum=%d\n", sum);
			sum = 0;
		}
	}

	return 0;
}
