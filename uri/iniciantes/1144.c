#include <stdio.h>
#include <math.h>

int main(){
	int a = 0, i = 0;

	scanf("%d", &a);

	for(i = 1; i <= a; i++){
		printf("%d %d %d\n", i, i*i, i*i*i);
		printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
	}

	
	return 0;
}
