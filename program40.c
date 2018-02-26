#include <stdio.h>

int main() {
	int a,b=0,c=1,i,n;
	scanf("%d",&a);
	printf("Input\n%d\n",a);
	printf("output\n");
	for(i=1;i<=a;i++)
	{
		n=b+c;
		b=c;
		c=n;
		printf("%d\t",b);
	}
	
	return 0;
}
