#include <stdio.h>
 
int main() {
	int i, A, N;
	int S = 0;
	
	scanf("%d", &A);
	while(1)
	{
		scanf("%d", &N);
		
		if(N > 0)
			break;
	}
	
	for(i = A; i < A + N; i++)
		S += i;
	
	printf("%d\n", S);
 
    return 0;
}