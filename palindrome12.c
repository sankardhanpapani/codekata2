#include<stdio.h>
int main()
{
int c,n,r=0,d;
scanf("%d",&n);
printf("Input\n %d",n);
d=n;
while(n!=0)
{
c=(n%10);
r =r*10 + c;
n=(n/10);
}
if(d==r)
{
printf("\n Output \nyes");
}
else
{
printf("\n Output\nNo");
}
return 0;
}
