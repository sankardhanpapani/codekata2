#include <stdio.h>
int main() 
{
	int a[100],i,j,temp=0,n;
	printf("Input\n");
	scanf("%d",&n);
	printf("%d\n",n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);	
	}
	for(i=1;i<=n;i++)
	{
	printf("%d\t",a[i]);	
	}
	for(i=1;i<=n;i++)
	{
	for(j=i+1;j<=n;j++)
	{
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	}
	}
	printf("\nOutput\n%d %d",a[1],a[n]);

	return 0;
}
