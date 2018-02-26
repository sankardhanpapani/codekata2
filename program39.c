#include <stdio.h>

int main() {
	int i,a[100],temp=0;
	for(i=1;i<=10;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("Input\n");
	for(i=1;i<=10;i++)
	{
	printf("%d\t",a[i]);	
	}
	printf("\nOutput");
	for(i=1;i<=10;i++)
	{
	if(a[i]>temp)
	{
		temp=a[i];
	}
	}
	printf("%d",temp);
	return 0;
}
