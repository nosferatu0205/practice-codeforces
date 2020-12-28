#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    char str[1000];
    cin>>str;;

    int k=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]>32 && str[i]<127)
        {
            if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9' || str[i] == '+')
                k++;
        }
    }

    if(k==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
