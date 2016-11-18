#include <stdio.h>
 
int main() {
	int SENHA;
	
	while(1)
	{
		scanf("%d", &SENHA);
		
		if(SENHA == 2002) {
			printf("Acesso Permitido\n");
			break;
		} else {
			printf("Senha Invalida\n");
		}
	}
 
    return 0;
}