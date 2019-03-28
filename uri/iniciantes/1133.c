#include <stdio.h>

int main(){
	int a=0, b=0, aux;
	
	scanf("%d%d", &a, &b);

	if(a > b){
		for(aux = b+1; aux < a; aux++){
			if(aux % 5 == 3 || aux % 5 == 2)
				printf("%d\n", aux);
		}
	}else{
		for(aux = a+1; aux < b; aux++){
			if(aux % 5 == 3 || aux % 5 == 2)
				printf("%d\n", aux);
		}
	}
	return 0;
}
