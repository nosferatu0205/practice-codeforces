#include<stdio.h>
int main()
{
    int i, n, a;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a);

        if(360%(180-a)==0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
