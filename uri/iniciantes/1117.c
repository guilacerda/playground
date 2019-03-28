#include <stdio.h>

int main(){
	float a, b = -1.0;
	int x = 0;

	while(x < 2){
		scanf("%f", &a);

		if(a < 0.0 || a > 10.0)
			printf("nota invalida\n");
		else{
			x++;

			if(b >= 0.0){
				printf("media = %.2f\n", (b+a)/2);
				break;
			}else{
				b = a;
			}
		}
	}

	return 0;
}
