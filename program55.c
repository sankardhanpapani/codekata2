#include <stdio.h>
int main() {
	int N,M,c;
	printf("Input\n");
	scanf("%d %d",&N,&M);
	printf("%d %d",N,M);
	c=N*M;
	printf("\nOutput\n");
	if((c%2)==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
