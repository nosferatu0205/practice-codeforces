#include<stdio.h>


int main()
{
    int n, a[191], b=0, c=0, i, x, y;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]%2==0)
        {
            b++;
            x=i;
        }
        else
        {
            c++;
            y=1;
        }
    }

    if(b==1)
    {
        printf("%d\n", x);
    }
    else if(c==1)
    {
        printf("%d\n", y);
    }

    return 0;
}
