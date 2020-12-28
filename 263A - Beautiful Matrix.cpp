#include<bits/stdc++.h>

using namespace std;

int main()
{
    int mat[5][5];
    int i, j, k, l=0, m=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>mat[i][j];
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(mat[i][j]==1)
            {
                l=i+1;
                m=j+1;
                break;
            }
        }
    }
    cout<<(abs(3-l)+abs(3-m));
}
