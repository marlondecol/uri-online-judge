#include <stdio.h>
 
int main() {
	int i, N;

	while(1)
	{
		scanf("%d", &N);

		if(N == 0) break;
		else
		{
			int T[N];
			int ACUM = 10;

			for(i = 0; i < N; i++) scanf("%d", &T[i]);

			for(i = 0; i < N - 1; i++)
			{
				if(T[i + 1] - T[i] > 10) ACUM += 10;
				else ACUM += T[i + 1] - T[i];
			}

			printf("%d\n", ACUM);
		}
	}
 
    return 0;
}