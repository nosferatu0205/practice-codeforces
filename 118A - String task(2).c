#include<stdio.h>
#include<string.h>

int main()
{

    int i;
    char alpha[100];
    gets(alpha);

    for(i=0; i<strlen(alpha); i++)
    {
        if(alpha[i]>='A' && alpha[i]<='Z')
        {
            alpha[i] = alpha[i] + 32;
        }
    }

    for(i=0; i<strlen(alpha); i++)
    {
        if(alpha[i]=='a'||alpha[i]=='e'||alpha[i]=='i'||alpha[i]=='o'||alpha[i]=='u'||alpha[i]=='y')
            continue;
        else printf(".%c", alpha[i]);

    }

    return 0;

}
