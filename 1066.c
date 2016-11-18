#include <stdio.h>
 
int main() {
	int i, N;
	int PAR = 0;
	int IMP = 0;
	int POS = 0;
	int NEG = 0;
	
	for(i = 1; i <= 5; i++) {
		scanf("%d", &N);				
		if(N % 2 == 0) PAR++;			
		if(N % 2 != 0) IMP++;			
		if(N > 0) POS++;			
		if(N < 0) NEG++;
	}

	printf("%d valor(es) par(es)\n", PAR);
	printf("%d valor(es) impar(es)\n", IMP);
	printf("%d valor(es) positivo(s)\n", POS);
	printf("%d valor(es) negativo(s)\n", NEG);
 
    return 0;
}