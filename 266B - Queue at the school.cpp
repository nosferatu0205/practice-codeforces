#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, t, i;
    cin>>n>>t;
    char q[n];
    for(i=0; i<n; i++)
    {
        cin>>q[i];
    }

    while(t>0)
    {
        for(i=0; i<n; i++)
        {
            if(q[i]=='B' && q[i+1]=='G')
            {
                q[i] = 'G';
                q[i+1] = 'B';
                i++;
            }
        }
        t--;
    }
    for(i=0; i<n; i++)
    {
        cout<<q[i];
    }
}
