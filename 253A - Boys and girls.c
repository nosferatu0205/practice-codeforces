#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, KO, KP, x, H, I;
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
        KO = I;
        for(i=0, j=0; i<KO, j<KO; i++, j++)
        {
            printf("%c%c", B[i], G[j]);
            //printf("gggg");
        }
        KP = H;
        for(x=KO; x<KP; x++)
        {
            printf("%c", B[x]);
        }
    }
    else if(I>=H)
    {
        KO = H;
        for(i=0, j=0; i<KO, j<KO; i++, j++)
        {
            printf("%c%c", G[j], B[i]);
        }
        KP = I;
        for(x=KO; x<KP; x++)
        {
            printf("%c", B[x]);
        }
    }

}
