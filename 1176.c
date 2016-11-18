#include <stdio.h>
 
int main() {
	int i, K, N;
	unsigned long long int Fib[61];
	
	scanf("%d", &K);
	
	Fib[0] = 0;
	Fib[1] = 1;
	
	for(i = 2; i < 61; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	
	for(i = 1; i <= K; i++)
	{
		scanf("%d", &N);
		printf("Fib(%d) = %llu\n", N, Fib[N]);
	}
 
    return 0;
}