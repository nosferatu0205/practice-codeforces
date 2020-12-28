#include<stdio.h>

int main()
{
    int x,a,b,c,d,i;

    scanf("%d",&x);

    for(i=x+1; i<=9012; i++)
    {
        a=i/1000;
        b=(i%1000)/100;
        c=(i%100)/10;
        d=i%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
