#include <stdio.h>
 
int main() {
	int N1, N2, N3;
	
	scanf("%d %d %d", &N1, &N2, &N3);
	
	if(N1 < N2 && N1 < N3)
	{
		if(N2 < N3) printf("%d\n%d\n%d\n", N1, N2, N3);
		else printf("%d\n%d\n%d\n", N1, N3, N2);
	}
	if(N2 < N1 && N2 < N3)
	{
		if(N1 < N3) printf("%d\n%d\n%d\n", N2, N1, N3);
		else printf("%d\n%d\n%d\n", N2, N3, N1);
	}
	if(N3 < N1 && N3 < N2)
	{
		if(N1 < N2) printf("%d\n%d\n%d\n", N3, N1, N2);
		else printf("%d\n%d\n%d\n", N3, N2, N1);
	}
	
	printf("\n%d\n%d\n%d\n", N1, N2, N3);
 
    return 0;
}