#include <stdio.h>
 
int main() {
	int X, Y, i;
	
	while(1) {
		scanf("%d", &X);
		scanf("%d", &Y);
		
		int SOMA = 0;
		
		if(X < 1 || Y < 1) break;
		else {
			if(X > Y) {
				for(i = Y; i <= X; i++) {
					printf("%d ", i);
					SOMA = SOMA + i;
				}
			} else {
				for(i = X; i <= Y; i++) {
					printf("%d ", i);
					SOMA = SOMA + i;
				}
			}
			
			printf("Sum=%d\n", SOMA);
		}
	}
 
    return 0;
}