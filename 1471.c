#include <stdio.h>
 
int main() {
	int i, R, N, PLACA, M[10000];

	while(scanf("%d %d", &N, &R) != EOF)
	{
		for(i = 1; i <= N; i++) M[i] = 1;

		for(i = 1; i <= R; i++)
		{
			scanf("%d", &PLACA);
			M[PLACA] = 0;
		}

		for(i = 1; i <= N; i++)
		{
			if(M[i] == 1) printf("%d ", i);
		}

		if(N == R) printf("*");

		printf("\n");
	}
 
    return 0;
}