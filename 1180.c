#include <stdio.h>
 
int main() {
	int i, menor, posi, N;

	scanf("%d", &N);

	int X[N];

	for(i = 0; i < N; i++) scanf("%d", &X[i]);

	menor = X[0];

	for(i = 0; i < N; i++)
	{
		if(X[i] < menor)
		{
			menor = X[i];
			posi = i;
		}
	}

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posi);
 
    return 0;
}