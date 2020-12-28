
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int Sim, AntiSim, Stone;
    bool simon = false;
    cin>>Sim>>AntiSim>>Stone;

    while(Stone>0)
    {
        if(!simon)
        {
            Stone -= __gcd(Sim, Stone);
            if(Stone<0)
                break;
            else
                simon = true;
        }

        else
        {
            Stone -= __gcd(AntiSim, Stone);
            if(Stone<0)
                break;
            else
                simon = false;
        }
    }

    if(simon)
        cout<<"0";

        else
            cout<<"1";

}
