#include <stdio.h>
 
int main() {
	int i, N;

	while(1)
	{
		int SOMA = 0;

		scanf("%d", &N);

		if(N == 0) break;
		else
		{
			for(i = N; i <= N + 9; i++)
			{
				if(i % 2 == 0) SOMA = SOMA + i;
			}

			printf("%d\n", SOMA);
		}
	}
 
    return 0;
}