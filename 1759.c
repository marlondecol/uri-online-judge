#include <stdio.h>
 
int main() {
	int i, N;
	
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++) {
		if(i < N) printf("Ho ");
		else printf("Ho!\n");
	}
 
    return 0;
}