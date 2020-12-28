#include<stdio.h>
#include<string.h>

int main()
{
    char alpha[100];
    int i;
    gets(alpha);

    for(i=0; alpha[i]!='\0'; i++)
    {
        if(alpha[i]=='A' || alpha[i]=='a')
        {
            alpha[i] = alpha[i+1];
        }
        else if(alpha[i]=='E' || alpha[i]=='e')
        {
            alpha[i] = alpha[i+1];
        }
        else if(alpha[i]=='I' || alpha[i]=='i')
        {
            alpha[i] = alpha[i+1];
        }
        else if(alpha[i]=='o' || alpha[i]=='O')
        {
           alpha[i] = alpha[i+1];
        }
        else if(alpha[i]=='U' || alpha[i]=='u')
        {
           alpha[i] = alpha[i+1];
        }
        else if(alpha[i]=='Y' || alpha[i]=='y')
        {
            alpha[i] = alpha[i+1];
        }
        else if(alpha[i]<97  )
        {
            alpha[i] = alpha[i] + 32;
        }

    }

    for(i=0; alpha[i]!='\0'; i++)
    {
        printf("%c", alpha[i]);
    }

    return 0;
}
