#include <stdio.h>
 
int main() {
	int a,b,temp;
	printf("Input:\n");
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Output\n%d %d",a,b);
	return 0;
}
 
