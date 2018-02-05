#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	int a[N];
	printf("Input\n%d\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\t",a[i]);
	}
	printf("\noutput");
	for(i=0;i<N;i++)
	{
		printf("\n%d %d",a[i],i);
	}
	return 0;
}
