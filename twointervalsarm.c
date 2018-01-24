#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, temp1, temp2, rem, n = 0, r = 0;
    scanf("%d %d", &a, &b);
    printf("Input\n %d %d\n",a,b);
    printf("output\n");
    for(i = a ++; i < b; ++i)
    {
        temp2 = i;
        temp1 = i;

    
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }

   
        while (temp2 != 0)
        {
            rem = temp2 % 10;
            r+= pow(rem, n);
            temp2 /= 10;
        }

    if (r == i)
        {
         printf("%d ",i);
        }
         n=0;
    r=0;
    }
   
    return 0;
}
