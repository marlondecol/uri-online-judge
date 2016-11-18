#include <stdio.h>
 
int main() {
	int X, Y, i;	
	int aux = 0;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	for (i = 1; i <= Y; i++) {
		aux += 1;
		
		if (aux == X) {
			printf("%d\n", i);
			aux = 0;
		} else printf("%d ", i);
	}
 
    return 0;
}