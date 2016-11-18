#include <stdio.h>
 
int main() {
	int COD, QNT;
	double VALOR;
	
	scanf("%d", &COD);
	scanf("%d", &QNT);
	
	if(COD == 1) VALOR = QNT * 4;
	else if(COD == 2) VALOR = QNT * 4.5;
	else if(COD == 3) VALOR = QNT * 5;
	else if(COD == 4) VALOR = QNT * 2;
	else if(COD == 5) VALOR = QNT * 1.5;
	
	printf("Total: R$ %.2lf\n", VALOR);
 
    return 0;
}