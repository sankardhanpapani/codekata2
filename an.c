#include<stdio.h>
int main()
{
int i,j,N,K,b=0;
scanf("%d,%d",&N,&K);
printf("Input\n %d %d ",N,K);
int s[100];
for(i=1;i<=N;i++)
{
scanf("%d",&s[i]);
printf("%d",s[i]);
}
for(j=1;j<=K;j++)
{
b +=s[i];
}
printf("Output\n %d \n",b);
return 0;
}
