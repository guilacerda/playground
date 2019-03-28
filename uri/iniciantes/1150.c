#include <stdio.h>

int main(){
	int x, y, sum=1, i;

	scanf("%d", &x);

	while(1){
		scanf("%d", &y);

		if(y > x)
			break;
	}
	
	i = x;

	while(1){
		x++;
		i += x;
		
		if(i > y){
			sum++;
			break;
		}

		sum++;
	}

	printf("%d\n", sum);

	return 0;
}
