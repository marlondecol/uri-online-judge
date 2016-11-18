#include <stdio.h>
 
int main() {
	int i, j, N;

	while(scanf("%d", &N) != EOF)
	{
		for(i = 1; i <= N; i++)
		{
			for(j = 1; j <= N; j++)
			{
				if(N % 2 == 0)
				{
					if(j != N)
					{
						if(j == i) printf("1");
						else if(j == (N + 1) - i) printf("2");
						else printf("3");
					}
					else
					{
						if(j == i) printf("1\n");
						else if(j == (N + 1) - i) printf("2\n");
						else printf("3\n");
					}
				}
				else
				{
					if(j != N)
					{
						if(i == (N + 1) / 2 && j == (N + 1) / 2) printf("2");
						else if(j == i) printf("1");
						else if(j == (N + 1) - i) printf("2");
						else printf("3");
					}
					else
					{
						if(j == i) printf("1\n");
						else if(j == (N + 1) - i) printf("2\n");
						else printf("3\n");
					}
				}
			}
		}
	}
 
    return 0;
}