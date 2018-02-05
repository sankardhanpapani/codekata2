#include <stdio.h>
int main()
{
int min,c,e;
scanf("%d",&min);
printf("Input\n %d \n",min);
c=(min % 60);
e=(min / 60);
printf("output\n %d %d",e,c);
	return 0;
}
