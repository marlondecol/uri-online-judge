#include <stdio.h>
 
int main() {
	int i = 1, j = 7;

	while(i != 11)
	{
		printf("I=%d J=%d\n", i, j);
		printf("I=%d J=%d\n", i, j - 1);
		printf("I=%d J=%d\n", i, j - 2);
		i = i + 2;
		j = j + 2;
	}
 
    return 0;
}