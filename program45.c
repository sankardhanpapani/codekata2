#include <stdio.h>
int main() {
	int a,c=0;
	printf("Input\n");
	scanf("%d",&a);
	printf("%d",a);
	printf("\nOutput\n");
	while(a!=0)
	{
		a=a/10;
		c++;
	}
	printf("%d",c);
	return 0;
}
