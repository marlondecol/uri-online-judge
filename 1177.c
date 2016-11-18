#include <stdio.h>
 
int main() {
	int i, X, N[1000];
	int j = 0;
	
	scanf("%d", &X);
	
	for(i = 0; i < 1000; i++)
	{
		N[i] = j;
		j++;
		
		if(j == X) j = 0;
	}
	
	for(i = 0; i < 1000; i++)
	{
		printf("N[%d] = %d\n", i, N[i]);
	}
 
    return 0;
}