#include <stdio.h>

int main(){
	int x, i=1;
	while(1){
		scanf("%d", &x);

		if(x == 0)
			break;
		
		for(i; i <= x; i++){
			if(i == x)
				printf("%d\n", i);
			else
				printf("%d ", i);
		}

		i = 1;
	}
	return 0;
}
