#include <stdio.h>
 
int main() {
	int i = 1;

	while(i != 11)
	{
		printf("I=%d J=7\n", i);
		printf("I=%d J=6\n", i);
		printf("I=%d J=5\n", i);
		i = i + 2;
	}
 
    return 0;
}