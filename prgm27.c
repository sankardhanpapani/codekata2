#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	printf("Input\n%c\n",a);
	if(a>='0' && a<='9')
	printf("Output\nyes");
	else
	printf("Output\nNo");
	return 0;
}
