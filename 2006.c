#include <stdio.h>
 
int main() {
	int i, T, C, S = 0;
	
	scanf("%d", &T);
	
	for(i = 1; i <= 5; i++) {
		scanf("%d", &C);
		
		if(C == T) S++;
	}
	
	printf("%d\n", S);
 
    return 0;
}