#include <stdio.h>

int main(){
	int x, i = 0, sum = 0;

	while(1){
		scanf("%d", &x);

		if(x < 0)
			break;
		else
			sum += x;

		i++;
	}

	printf("%.2f\n", (float) sum/i);
}
