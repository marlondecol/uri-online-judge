#include <stdio.h>
 
int main() {
	int i, K, N[10];
	
	scanf("%d", &K);
	
	for(i = 0; i < 10; i++)
	{
		N[i] = K;
		printf("N[%d] = %d\n", i, K);
		K = K * 2;
	}
 
    return 0;
}