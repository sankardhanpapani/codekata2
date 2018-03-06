#include <stdio.h>

int main() {
	int x,y=0,z=1,i,n;
	scanf("%d",&x);
	printf("Input\n%d\n",x);
	printf("output\n");
	for(i=1;i<=x;i++)
	{
		n=y+z;
		y=z;
		z=n;
		printf("%d\t",y);
	}
	
	return 0;
}
