#include <stdio.h>
 
int main() {
	int i, posi, maior = -1, N[100];

	for(i = 0; i < 100; i++) scanf("%d", &N[i]);

	for(i = 0; i < 100; i++)
	{
		if(N[i] > maior)
		{
			maior = N[i];
			posi = i + 1;
		}
	}

	printf("%d\n", maior);
	printf("%d\n", posi);
 
    return 0;
}