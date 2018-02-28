#include <stdio.h>
int main() {
	int a,i,b=0;
	char c[i];
	printf("Input\n");
	scanf("%d",&a);
	printf("%d\n",a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		c[i]=b;
		i++;
	
	}
	printf("Output\n");
	for(i=2;i>=0;i--)
	{
		printf("%d\t",c[i]);
	}
	return 0;
}
