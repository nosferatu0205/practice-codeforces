#include<stdio.h>
#include<string.h>

int main()
{
    char sig[250];
    gets(sig);
    int n=0, i;
    n = strlen(sig);

    for(i=0; i<n; i++)
    {
        if(sig[i]=='.')
        {
            printf("0");
            continue;
        }
        else if(sig[i]=='-' && sig[i+1]=='.')
        {
            printf("1");
            i++;
            continue;
        }
        else if(sig[i]=='-' && sig[i+1]=='-')
            {
                printf("2");
                i++;
                continue;
            }
    }
}
