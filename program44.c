#include <stdio.h>
int main() {
	int a;
	printf("Input\n");
	scanf("%d",&a);
	printf("%d",a);
	if(a>=0 && a<=10)
	{
		printf("\nOutput\nyes");
	}
	else
	{
	printf("\nOutput\nno");
	}
	return 0;
}
