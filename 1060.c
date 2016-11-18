#include <stdio.h>
 
int main() {
	int i;
	int SAIDA = 0;
	double N;
	
	for(i = 1; i <= 6; i++) {
		scanf("%lf", &N);		
		if(N > 0) SAIDA++;
	}

	printf("%d valores positivos\n", SAIDA);
 
    return 0;
}