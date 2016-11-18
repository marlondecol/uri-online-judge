#include <stdio.h>
 
int main() {
	int i;
	int SAIDA = 0;
	double N, MEDIA;
	
	for(i = 1; i <= 6; i++) {
		scanf("%lf", &N);
				
		if(N > 0) {
			SAIDA++;
			MEDIA = MEDIA + N;
		}
	}

	printf("%d valores positivos\n", SAIDA);
	printf("%.1lf\n", MEDIA / SAIDA);
 
    return 0;
}