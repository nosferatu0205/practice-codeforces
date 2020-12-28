#include<stdio.h>

int main()
{
    int n, sum = 0, max = 0, i;
    scanf("%d", &n);

    int seat[2*n];
    for(i=0; i<2*n; i++)
    {
        scanf("%d", &seat[i]);
    }

    for(i=0; i<n*2; i++){
        if(i%2==0) sum = sum - seat[i];

        else{
            sum = sum + seat[i];
            if(sum>max) max = sum;
        }
    }

    printf("%d", max);
}
