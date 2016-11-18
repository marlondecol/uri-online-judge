#include <stdio.h>
 
int main() {
	int i, j, N, Q, x;

	scanf("%d", &Q);

	for(i = 1; i <= Q; i++)
	{
		scanf("%d", &N);
		x = 0;

		for(j = 1; j <= N; j++)
		{
			if(N % j == 0) x++;
		}

		if(x == 2) printf("%d eh primo\n", N);
		else printf("%d nao eh primo\n", N);
	}
 
    return 0;
}