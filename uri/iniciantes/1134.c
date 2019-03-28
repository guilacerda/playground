#include <stdio.h>

int main(){
	int al = 0, ga = 0, di = 0, x = 0;

	while(1){
		scanf("%d", &x);

		if(x == 4)
			break;
		else if(x == 1)
			al++;
		else if(x == 2)
			ga++;
		else if(x == 3)
			di++;
	}

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al, ga, di);

	return 0;
}
