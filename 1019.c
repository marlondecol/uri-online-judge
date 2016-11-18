#include <stdio.h>
 
int main() {
	int ENT, H, M, S;

	scanf("%d", &ENT);

	H = ENT;
	M = (H - ((H / 3600) * 3600));
	S = (M - ((M / 60) * 60));

	printf("%d:%d:%d\n", H / 3600, M / 60, S);
 
    return 0;
}