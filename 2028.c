#include <stdio.h>
 
int main() {
	int i, j, N, CASO = 1;

	while(scanf("%d", &N) != EOF)
	{
		int SOMA = 1;

		for(i = 0; i <= N; i++)
		{
			for(j = 1; j <= i; j++)
			{
				SOMA++;
			}
		}
		
		if(SOMA > 1) printf("Caso %d: %d numeros\n0", CASO, SOMA);
		else printf("Caso %d: %d numero\n0", CASO, SOMA);

		for(i = 0; i <= N; i++)
		{
			for(j = 1; j <= i; j++)
			{
				printf(" %d", i);
			}
		}

		printf("\n\n");
		CASO++;
	}
 
    return 0;
}