#include <stdio.h>
 
int main() {
	int i, N;
	int SAIDA = 0;
	
	for(i = 1; i <= 5; i++) {
		scanf("%d", &N);				
		if(N % 2 == 0) SAIDA++;
	}

	printf("%d valores pares\n", SAIDA);
 
    return 0;
}