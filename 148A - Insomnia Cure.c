#include<iostream>

using namespace std;

int main()
{
    long long int a, b, c, d, e, i, j;
    cin>>a>>b>>c>>d>>e;

    j=0;
    for(i=1; i<=e; i++)
    {
        if(i%a==0 && i%b==0 && i%c==0 && i%d==0) j++;
    }

    cout<<j<<endl;

}
