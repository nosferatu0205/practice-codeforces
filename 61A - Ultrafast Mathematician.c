#include<stdio.h>
#include<string.h>

int main()
{
    char a[105], b[105];
    int i;
    gets(a); gets(b);

    for(i=0; i<strlen(a); i++)
    {
        if(a[i]==b[i]) a[i] = '0';
        else a[i] = '1';
    }

    for(i=0; i<strlen(a); i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}
