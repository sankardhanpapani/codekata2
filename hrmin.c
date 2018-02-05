#include <stdio.h>
int main()
{
int hr1,hr2,min1,min2,a,b,c,e,d;
printf("Input\n");
scanf("%d %d\n",&hr1 ,&min1);
scanf("%d %d",&hr2 ,&min2);
printf("%d %d\n%d %d\n",hr1,min1,hr2,min2);
a=(hr1*60+min1);
b=(hr2*60+min2);
d=a-b;
c=(d % 60);
e=(d / 60);
printf("output\n %d %d",e,c);
	return 0;
}
