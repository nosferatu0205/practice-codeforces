#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int i, j=0, k=0, l=0;
    gets(a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='1')
        {
            j++;
            k=0;
        }
        else if(a[i]=='0')
        {
            k++;
            j=0;
        }

        if(j>=7||k>=7)
        {
            l = 1;
            break;
        }
    }
    if(l==1)
        printf("YES");
    else
        printf("NO");
}
