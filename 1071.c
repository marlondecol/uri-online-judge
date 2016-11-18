#include <stdio.h>
 
int main() {
	int N1, N2, AUX, i;
	int SOMA = 0;
	
	scanf("%d", &N1);
	scanf("%d", &N2);
	
	if(N1 > N2) {
		AUX = N1;
		N1 = N2;
		N2 = AUX;
	}
	
	N1 = N1 + 1;
	N2 = N2 - 1;
	
	for(i = N1; i <= N2; i++) if(i % 2 != 0) SOMA = SOMA + i;	

	printf("%d\n", SOMA);
 
    return 0;
}