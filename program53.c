#include <stdio.h>
int main() {
	int a,b=0,c=0;
	printf("Input\n");
	
	scanf("%d",&a);
	printf("%d\n",a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
	           c=c+b;
	}
	printf("Output\n%d",c);

	return 0;
}
