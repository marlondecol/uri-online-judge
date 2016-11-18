#include <stdio.h>
 
int main() {
	int i, j, N, M;
	
	scanf("%d %d", &N, &M);
	
	int G[N][M];
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &G[i][j]);
		}
	}
	
	int T = 0;
	
	for (i = 0; i < N; i++) {
		int P = 0;
		
		for (j = 0; j < M; j++) {
			if (G[i][j] > 0) P++;
		}
		
		if (P >= M) T++;
	}
	
	printf("%d\n", T);
 
    return 0;
}