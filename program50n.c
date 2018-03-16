#include <stdio.h>
#include<math.h>
int main() {
	int a,n;
	float b;
	scanf("%d",&n);
	printf("Input\n%d",n);
	b=sqrt(n)/sqrt(2);
	c=sqrt(n);
	a=b;
	printf("\nOutput\n");
	if(a==b || b==c)
	printf("yes");
	else
	printf("no");
	return 0;
}
