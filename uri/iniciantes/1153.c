#include <stdio.h>

int fatorial(int x){
	int sum = 0;

	if(x <= 1)
		return 1;
	else{
		sum += x * fatorial(x-1);
		return sum;
	}
}

int main(){
	int x, i;

	scanf("%d", &x);

	printf("%d\n", fatorial(x));

	return 0;
}
