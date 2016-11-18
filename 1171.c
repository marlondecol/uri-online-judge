#include <stdio.h>
 
int main() {
	int i, N, V, X[2001] = {0};

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d", &V);
		X[V]++;
	}

	for(i = 0; i < 2001; i++)
	{
		if(X[i] > 0)
		{
			printf("%d aparece %d vez(es)\n", i, X[i]);
		}
	}
 
    return 0;
}