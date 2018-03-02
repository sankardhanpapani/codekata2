#include <stdio.h>
#include<math.h>
int main() {
	int a;
	scanf("%d",&a);
	printf("Input\n%d",a);
	printf("\nOutput\n");
	if((a%2)==0)
	{
            a=a;
	}
	else
	{
		--a;
	}
	printf("%d",a);
	return 0;
}
