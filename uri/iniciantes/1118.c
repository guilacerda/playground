#include <stdio.h>

int main(){
	float a, b = -1.0;
	int x = 0, opt = 0;

	while(opt != 2){
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

		x = 0;
		b = -1.0;
		a = 0;
		
		while(1){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &opt);

			if(opt == 1 || opt == 2)
				break;	
		}
	}
	return 0;
}
