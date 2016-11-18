#include <stdio.h>
 
int main() {
    int X, Y, i, aux;
    int SOMA = 0;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    
    if (Y < X) {
		aux = X;
		X = Y;
		Y = aux;
    }
    
    for (i = X; i <= Y ; i++) {
		if (i % 13 != 0) {
			SOMA += i;			
		}
	}
	
	printf("%d\n", SOMA);
 
    return 0;
}