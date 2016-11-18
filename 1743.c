#include <stdio.h>
 
int main() {
	int i, X[5], Y[5];
	
	for(i = 0; i < 5; i++) scanf("%d", &X[i]);
	for(i = 0; i < 5; i++) scanf("%d", &Y[i]);
	
	int ERRO = 0;
	
	for(i = 0; i < 5; i++)
	{
		if(X[i] == Y[i])
		{
			ERRO = 1;
			break;
		}
	}
	
	if(ERRO) printf("N\n");
	else printf("Y\n");
 
    return 0;
}