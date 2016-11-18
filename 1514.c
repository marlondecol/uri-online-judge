#include <stdio.h>
 
int main() {
	int i, j, C1, C2, C3, C4, T, Y1, Y2, Y3, Y4, M, N, X[100][100];

	while(1)
	{
		T = 0;
		Y1 = 0;
		Y2 = 0;
		Y3 = 0;
		Y4 = 0;

		scanf("%d %d", &N, &M);

		if(M == N && M == 0) break;

		for(i = 0; i < N; i++)
		{
			for(j = 0; j < M; j++)
			{
				scanf("%d", &X[i][j]);
			}
		}

		for(i = 0; i < N; i++)
		{
			C1 = 0;
			C4 = 0;

			for(j = 0; j < M; j++)
			{
				if(X[i][j] == 0)
					C1++;
				if(X[i][j] == 1)
					C4++;
			}

			if(C1 != 0)
				Y1++;
			if(C4 != 0)
				Y4++;
		}

		for(j = 0; j < M; j++)
		{
			C2 = 0;
			C3 = 0;

			for(i = 0; i < N; i++)
			{
				if(X[i][j] == 0)
					C2++;
				if(X[i][j] == 1)
					C3++;
			}

			if(C2 != 0)
				Y2++;
			if(C3 != 0)
				Y3++;
		}

		if(Y1 == N)
			T++;
		if(Y2 == M)
			T++;
		if(Y3 == M)
			T++;
		if(Y4 == N)
			T++;

		printf("%d\n", T);
	}
 
    return 0;
}