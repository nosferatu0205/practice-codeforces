include<bits/stdc++.h>
    #include<stdio.h>
    #include<string>

    using namespace std;

    int main()
    {
        int i;
        int a;
        cin>>a;
        int str[a];

        for(i=0; i<a; i++){
        cin>>str[i];
        }

        sort(str, str+a);

        for(i=0;i<a;i++){
            printf("%d ",str[i]);
        }
    }
