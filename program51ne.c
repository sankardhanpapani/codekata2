#include <stdio.h>
int main() {
	int a,i,b=0,d=0,j;
	char c[100];
	printf("Input\n");
	
	scanf("%d",&a);
	printf("%d\n",a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		c[j]=b;
		j++;
	            d++;
	}
	printf("Output\n");
	for(i=d-1;i>=0;i--)
	{
		printf("%d\t",c[i]);
	}
	return 0;
}
