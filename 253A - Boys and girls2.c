#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, K1, K2, x, H, I;
    scanf("%d %d", &H, &I);
    char B[H], G[I];
    for(i=0; i<H; i++)
    {
        B[i] = 'B';
    }
    for(i=0; i<I; i++)
    {
        G[i] = 'G';
    }

    if(H>I)
    {

        for(i=0; G[i]!='\0'; i++)
        {
            printf("%c%c", B[i], G[i]);
            //printf("gggg");
        }

        for(x=i+1; x<H; x++)
        {
            printf("%c", B[x]);
        }
    }
    else if(I>=H)
    {

        for(i=0; B[i]!='\0'; i++)
        {
            printf("%c%c", G[i], B[i]);
        }

        for(x=i+1; x<I; x++)
        {
            printf("%c", B[x]);
        }
    }

}
