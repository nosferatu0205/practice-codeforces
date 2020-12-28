#include<stdio.h>
#include<string.h>

 int main()
 {
     char n[100];
     int i, j=0;
     gets(n);

     for(i=0; n[i]!='\0'; i++)
     {
         if(n[i]<97)
         {
             j++;
         }
     }

     for(i=0; n[i]!='\0'; i++)
     {
         if(j==strlen(n)){
         printf("%c", n[i]+32);
         }
         else if(n[i]>=97 && j==strlen(n)-1)
         {
             if(n[i]>=97)
             {
                 printf("%c", n[i]-32);
             }
             else{
                printf("%c", n[i]+32);
             }
         }
         else
                printf("%c", n[i]);
     }
 }
