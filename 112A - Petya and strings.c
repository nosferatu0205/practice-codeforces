#include<stdio.h>
#include<string.h>

int main()
{
    char a[105], b[105];
    int i;
    scanf("%s %s", &a, &b);

    for(i=0; i<strlen(a); i++)
    {
        if(a[i]<95) {a[i]+=32;}
        if(b[i]<95) {b[i]+=32;}
    }

    i = strcmp(a, b);

    printf("%d", i);
}
