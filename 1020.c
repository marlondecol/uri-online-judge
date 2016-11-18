#include <stdio.h>
 
int main() {
	int ENT, ANO, MES, DIA;

	scanf("%d", &ENT);

	ANO = ENT;
	MES = (ANO - ((ANO / 365) * 365));
	DIA = (MES - ((MES / 30) * 30));

	printf("%d ano(s)\n", ANO / 365);
	printf("%d mes(es)\n", MES / 30);
	printf("%d dia(s)\n", DIA);
 
    return 0;
}