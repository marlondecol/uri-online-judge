#include <stdio.h>
 
int main() {
	int C1, C2;
	
	scanf("%d %d", &C1, &C2);
	
	int T = 1;
	int P1 = C1;
	int P2 = C2;
	
	while(1) {
		P1 += C1;
		P2 += C2;
		
		T++;
		
		if (P2 - P1 >= C2) {
			break;
		}
	}
	
	printf("%d\n", T);
 
    return 0;
}