#include <stdio.h>
 
int main() {
	int N, N1, N2, AUX, i, j;
	
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++) {
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
		
		for(j = N1; j <= N2; j++) if(j % 2 != 0) SOMA = SOMA + j;
		
		printf("%d\n", SOMA);		
	}
 
    return 0;
}