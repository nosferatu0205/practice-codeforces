#include<stdio.h>

int main()
{
    scanf("%d %d", &x, &y);

    int j=0, p=0;
    for(i=0, j=x+1;;i++, j++)
    {
        if(j%i!=0) continue;
        else if(j%i==0)
        {
            p++;
            break;
        }
    }

    if()
}
