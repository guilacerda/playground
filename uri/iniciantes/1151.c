#include <stdio.h>

int fibo(int num);

int main(){
	int n, i;

	scanf("%d", &n);

	int fib[n-1];

	for(i = 0; i < n; i++){
		if(i+1 == n){
			printf("%d\n", fibo(i+1));
			break;
		}
		else
			printf("%d ", fibo(i+1));
	}

	return 0;
}

int fibo(int num){
	if(num == 1)
		return 0;
	if(num == 2 || num == 3)
		return 1;
	else
		return fibo(num-1) + fibo(num-2);
}
