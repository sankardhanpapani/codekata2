#include <stdio.h>
int main() 
{
	int a[100],n,t=0,i;
	int avg;
	printf("Input\n");
	scanf("%d",&n);
	printf("%d\n",n);
            for(i=1;i<=n;i++)
            {
            scanf("%d",&a[i]);
            printf("%d\t",a[i]);
            }
            for(i=1;i<=n;i++)
            {
            	t=t+a[i];
            }
            avg=t/n;
            printf("\nOutput\n%d",avg);
	return 0;
}
