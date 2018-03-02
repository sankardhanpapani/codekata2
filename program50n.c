#include <stdio.h>
#include<math.h>
int main() {
	int a,n;
	float b;
	scanf("%d",&n);
	printf("Input\n%d",n);
	b=sqrt(n)/sqrt(2);
	a=b;
	printf("\nOutput\n");
	if(a==b)
	printf("yes");
	else
	printf("no");
	return 0;
}
