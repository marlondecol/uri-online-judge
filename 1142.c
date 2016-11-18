#include <stdio.h>
 
int main() {
    int X, Y, i, aux;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    
    if (Y < X) {
		aux = X;
		X = Y;
		Y = aux;
    }
    
    for (i = X + 1; i < Y ; i++) {
		if (i % 5 == 2 || i % 5 == 3) printf("%d\n", i);
	}
 
    return 0;
}