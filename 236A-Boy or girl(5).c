#include<stdio.h>
#include<string.h>
int main()
{
    int alpha[26], i, j, c=0, k, sum=0;
    alpha[26] = 0;
    char str[100];
    gets(str);
    alpha[26] = 0;
    for(i=0; i<strlen(str); i++)
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

    k = 1;
    for(j=0; j<26; j++)
    {
        if(alpha[j]>=1){
            alpha[j] = k;
        }
    }

    for(j=0; j<26; j++)
    {
        sum = array[j] + sum;
    }

    if(sum%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else if(sum%2!=0)
    {
        printf("IGNORE HIM!");
    }

    return 0;
