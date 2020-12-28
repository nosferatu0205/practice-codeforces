#include<stdio.h>
#include<string.h>

int main()
{
    int alpha[25], i=0, j=0, c=0, d=0, odd=0;
    char str[100];
    gets(str);

    for(i=0; i<=100; i++)
    {
        if(str[i]=='A' || str[i]=='a')
        {
            alpha[0]++;
        }
        else if(str[i]=='B' || str[i]=='b')
        {
            alpha[1]++;
        }
        else if(str[i]=='C' || str[i]=='c')
        {
            alpha[2]++;
        }
        else if(str[i]=='D' || str[i]=='d')
        {
            alpha[3]++;
        }
        else if(str[i]=='E' || str[i]=='e')
        {
            alpha[4]++;
        }
        else if(str[i]=='F' || str[i]=='f')
        {
            alpha[5]++;
        }
        else if(str[i]=='G' || str[i]=='g')
        {
            alpha[6]++;
        }
        else if(str[i]=='H' || str[i]=='h')
        {
            alpha[7]++;
        }
        else if(str[i]=='I' || str[i]=='i')
        {
            alpha[8]++;
        }
        else if(str[i]=='J' || str[i]=='j')
        {
            alpha[9]++;
        }
        else if(str[i]=='K' || str[i]=='k')
        {
            alpha[10]++;
        }
        else if(str[i]=='L' || str[i]=='l')
        {
            alpha[11]++;
        }
        else if(str[i]=='M' || str[i]=='m')
        {
            alpha[12]++;
        }
        else if(str[i]=='N' || str[i]=='n')
        {
            alpha[13]++;
        }
        else if(str[i]=='O' || str[i]=='o')
        {
            alpha[14]++;
        }
        else if(str[i]=='P' || str[i]=='p')
        {
            alpha[15]++;
        }
        else if(str[i]=='Q' || str[i]=='q')
        {
            alpha[16]++;
        }
        else if(str[i]=='R' || str[i]=='r')
        {
            alpha[17]++;
        }
        else if(str[i]=='S' || str[i]=='s')
        {
            alpha[18]++;
        }
        else if(str[i]=='T' || str[i]=='t')
        {
            alpha[19]++;
        }
        else if(str[i]=='U' || str[i]=='u')
        {
            alpha[20]++;
        }
        else if(str[i]=='V' || str[i]=='v')
        {
            alpha[21]++;
        }
        else if(str[i]=='W' || str[i]=='w')
        {
            alpha[22]++;
        }
        else if(str[i]=='X' || str[i]=='x')
        {
            alpha[23]++;
        }
        else if(str[i]=='Y' || str[i]=='y')
        {
            alpha[24]++;
        }
        else if(str[i]=='Z' || str[i]=='z')
        {
            alpha[25]++;
        }
    }

    for(j=0; j<=25; j++)
    {
        if(alpha[j]%2!=0 && alpha!=1)
        {
            odd++;
        }
        else
        {
            c++;
        }
    }

    if(odd=0)
    {
        printf("IGNORE HIM!");
    }
    else{
             printf("CHAT WITH HER!");

    }
    return 0;
}
