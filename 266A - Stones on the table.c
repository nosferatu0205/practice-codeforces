#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j=0;
    scanf("%d", &n);
    char a[n];
    scanf("%s", &a);

    for(i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
        {
            j++;
        }
    }

    printf("%d", j);
}
