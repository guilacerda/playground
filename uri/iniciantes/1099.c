#include <stdio.h>

int disgraca(int a, int b);

int main() {
	int x, a, b, result;

	scanf("%d", &x);

	while(x--){
		printf("eita %d\n", x);
		scanf("%d %d", &a, &b);

		result = disgraca(a, b);
		printf("%d\n", result);
	}

	
	return 0;
}

int disgraca(int a, int b){
	int aux, i, sum;

	if(a > b){
		aux = b;
		b = a;
		a = aux;
	}
	
	if(a == b || a+1 == b){
		return 0;
	}
	
	for(i = a+1; i < b; i++){
		if(i % 2 == 1){
			sum += i;
		}
	}

	printf("asdasdfasdf: %d\n", sum);

	return sum;
}
