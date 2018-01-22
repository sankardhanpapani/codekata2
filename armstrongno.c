#include <stdio.h>
#include <math.h>

int main()
{
    int no, a, r, s = 0, n = 0 ;
    scanf("%d", &no);
    printf("Input\n %d\n",no);
     a= no;
    
    while (a != 0)
    {
        a /= 10;
        ++n;
    }

    a = no;

    while (a != 0)
    {
        r = a%10;
        s += pow(r, n);
        a /= 10;
    }

    if(s == no)
        printf("Output \nyes");
    else
        printf("Input \nno");

    return 0;
}
