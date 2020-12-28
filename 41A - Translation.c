#include<stdio.h>
#include<string.h>

int main()
{
    char a[105], b[105];
    int i, j, sum = 0, x, y;
    scanf("%s%s", &a, &b);

    x = strlen(a);
    y = strlen(b);

    for(i=0, j=y-1; i<x, j>=0; i++, j--)
    {
        if(a[i]==b[j])
        {
            sum++;
        }
    }

    if(sum == x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
