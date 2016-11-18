#include <stdio.h>
 
int main() {
	int ENT, N100, N50, N20, N10, N5, N2, N1;
	
	scanf("%d", &ENT);
	
	N100 = ENT;
	N50 = (N100 - ((N100 / 100) * 100));
	N20 = (N50 - ((N50 / 50) * 50));
	N10 = (N20 - ((N20 / 20) * 20));
	N5 = (N10 - ((N10 / 10) * 10));
	N2 = (N5 - ((N5 / 5) * 5));
	N1 = (N2 - ((N2 / 2) * 2));
	
	printf("%d\n", ENT);
	printf("%d nota(s) de R$ 100,00\n", N100 / 100);
	printf("%d nota(s) de R$ 50,00\n", N50 / 50);
	printf("%d nota(s) de R$ 20,00\n", N20 / 20);
	printf("%d nota(s) de R$ 10,00\n", N10 / 10);
	printf("%d nota(s) de R$ 5,00\n", N5 / 5);
	printf("%d nota(s) de R$ 2,00\n", N2 / 2);
	printf("%d nota(s) de R$ 1,00\n", N1 / 1);
 
    return 0;
}