#include <stdio.h>

int main(){
	int x=0, a = 0, b = 0, inter = 0, gremio = 0, empate = 0;

	while(x != 2){
		scanf("%d%d", &a, &b);
		
		if(a > b)
			inter++;
		else if(b > a)
			gremio++;
		else
			empate++;

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &x);		
	}

	printf("%d grenais\n", inter+gremio+empate);
	printf("Inter:%d\nGremio:%d\nEmpates:%d\n", inter, gremio, empate);
	
	if(inter > gremio)
		printf("Inter venceu mais\n");
	else if(gremio > inter)
		printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");


	return 0;
}
