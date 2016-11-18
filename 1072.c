#include <stdio.h>
 
int main() {
	int X, N, i, IN = 0, OUT = 0;
	
	scanf("%d", &X);
	
	for(i = 1; i <= X; i++) {
		scanf("%d", &N);
		
		if(N >= 10 && N <= 20) IN++;
		else OUT++;
	}
	
	printf("%d in\n", IN);
	printf("%d out\n", OUT);
 
    return 0;
}