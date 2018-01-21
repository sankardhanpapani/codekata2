#include<stdio.h>
int main()
{
int a,n,r=0,b;
scanf("%d",&n);
printf("Input\n %d",n);
b=n;
while(n!=0)
{
a=(n%10);
r =r*10 + a;
n=(n/10);
}
if(b==r)
{
printf("\n Output \nyes");
}
else
{
printf("\n Output\nNo");
}
return 0;
}
