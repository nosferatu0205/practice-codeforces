#include<stdio.h>
#include<string.h>

int main()
{
    int j=0, c=0, i, x;
    char h[10] = "hello";

    char a[120];
    gets(a);

    x = strlen(a);

    for(i=0; i<5; i++)
    {
        while(j<x)
        {
            if(h[i]==a[j])
            {
                c++;
                j++;
                break;
            }
            else j++;
        }
    }

    if(c==5) printf("YES");
    else printf("NO");

    return 0;
}
