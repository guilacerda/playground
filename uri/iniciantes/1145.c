#include <stdio.h>

int main(){
	int j = 0, i = 1, a = 0, b = 0;

	scanf("%d%d", &a, &b);

	for(i = 1; i <= b; i++){
		j++;
		if(j == a){
			printf("%d", i);
		}
		else
			printf("%d ", i);
	
		if(j == a){
			j = 0;
			printf("\n");
		}
	}

	return 0;
}
