#include <stdio.h>
 
int main() {
	int X, N, i;
	
	scanf("%d", &X);
	
	for(i = 1; i <= X; i++) {
		scanf("%d", &N);
		
		if(N == 0) printf("NULL\n");
		else {
			if(N > 0) {
				if(N % 2 == 0) printf("EVEN POSITIVE\n");
				else printf("ODD POSITIVE\n");
			} else {
				if(N % 2 == 0) printf("EVEN NEGATIVE\n");
				else printf("ODD NEGATIVE\n"); 
			}
		}
	}
 
    return 0;
}