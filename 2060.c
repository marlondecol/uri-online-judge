#include <stdio.h>
 
int main() {
	int i, N, M2 = 0, M3 = 0, M4 = 0, M5 = 0;
	
	scanf("%d", &N);
	
	int X[N];
	
	for(i = 0; i < N; i++)
	{
		scanf("%d", &X[i]);
	}
	
	for(i = 0; i < N; i++)
	{
		if(X[i] % 2 == 0) M2++;
		if(X[i] % 3 == 0) M3++;
		if(X[i] % 4 == 0) M4++;
		if(X[i] % 5 == 0) M5++;
	}
	
	printf("%d Multiplo(s) de 2\n", M2);
	printf("%d Multiplo(s) de 3\n", M3);
	printf("%d Multiplo(s) de 4\n", M4);
	printf("%d Multiplo(s) de 5\n", M5);
 
    return 0;
}