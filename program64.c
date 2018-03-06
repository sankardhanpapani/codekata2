#include <stdio.h>
int main() {
	int a,b,c;
	printf("Input\n");
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);
	c=a+b;
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
