#include <stdio.h>
int main() {
	int i,n;
	char a[100];
	scanf("%s",a);
	scanf("%d",&n);
	printf("Input\n%s %d\n",a,n);
	printf("Output\n");
	for(i=1;i<=n;i++)
	{
	printf("%s\n",a);
	}return 0;
}
