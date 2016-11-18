#include <stdio.h>
 
int main() {
	int N, i;

	scanf("%d", &N);

	while (N != 0) {
		printf("1");

		for (i = 2; i <= N; i++) {
			printf(" %d", i);
		}
		
		printf("\n");
		scanf("%d", &N);		
	}
 
    return 0;
}