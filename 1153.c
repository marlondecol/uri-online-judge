#include <stdio.h>
 
int main() {
	int i, N;
	
	scanf("%d", &N);
	
	for(i = N - 1; i >= 1; i--)
	{
		N = N * i;
	}
	
	printf("%d\n", N);
 
    return 0;
}