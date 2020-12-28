#include<stdio.h>

int main()
{
    int n, i, x=0, j;
    scanf("%d", &n);

    int a[n][2];

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i][0]+a[i][1]+a[i][2]==2 ||a[i][0]+a[i][1]+a[i][2]>2&& a[i][0]+a[i][1]+a[i][2]!=0 && a[i][0]+a[i][1]+a[i][2]!=1) {x++;}
    }

    printf("%d", x);
}
