#include<stdio.h>
#include<string.h>

int main()
{
    int i, j=0, k=0;
    char a[105];
    gets(a);

    for(i=0; i<strlen(a); i++)
    {
        if(a[i]<95){
            j++;
        }
        else if(a[i]>95){
            k++;
        }
    }

    if(j==k)
    {
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]<95){
                a[i]+=32;
            }
        }
    }

    else if(j>k)
    {
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]>95)
            {
                a[i]-=32;
            }
        }
    }
    else if(j<k)
    {
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]<95){
                a[i]+=32;
            }
        }
    }

    for(i=0; i<strlen(a); i++)
    {
        printf("%c", a[i]);
    }
}
