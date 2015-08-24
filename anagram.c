#include <cmath>
#include<cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int i,n,t,sum,t1=1;
    cin>>t;
    char a[12345];
    
    while(t--)
        {
        int b[1234]={0};
    int c[1234]={0};
        sum=0;
        cin>>a;
        n=strlen(a);
        if(n%2==1)
            {
            cout<<"-1"<<endl;
        }
        else 
        {
            for(i=0;i<n/2;i++)
            {
            b[a[i]]++;
        }
        for(i=n/2;i<n;i++)
            {
            c[a[i]]++;
        }
        for(i=97;i<=122;i++)
            {
                sum+=abs(b[i]-c[i]);
            }
        cout<<sum/2<<endl;
        }
    }
    return 0;
}

