#include<stdio.h>
#include<string.h>

int main()
{
    int i, G, B;
    scanf("%d %d", &B, &G);

    char Boy[B+1];
    char Girl[G+1];

    for(i=0; i<B; i++)
    {
        Boy[i] = 'B';
    }
    Boy[i]='\0';

    for(i=0; i<G; i++)
    {
        Girl[i] = 'G';
    }
    Girl[i]='\0';

    if(B>G)
    {
        for(i=0; Girl[i]!='\0'; i++)
        {
            printf("%c%c", Boy[i], Girl[i]);
        }

        for(i=G; i<B; i++)
        {
            printf("%c", Boy[i]);
        }
    }

     else if(G>=B)
    {
        for(i=0; Boy[i]!='\0'; i++)
        {
            printf("%c%c", Girl[i], Boy[i]);
        }

        for(i=B; i<G; i++)
        {
            printf("%c", Girl[i]);
        }
    }

}
