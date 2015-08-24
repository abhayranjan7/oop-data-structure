#include <cmath>
#include<cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a1[1299][1234]={0},count=0,i,j,flag=1,k=0,s;
    char a[1239][1234],b[1234];
    cin>>n;
    for(i=0;i<n;i++)
        {
        k=0;
        cin>>b;
        s=strlen(b);
        for(j=0;j<s;j++)
            {
            a[i][k++]=b[j];
        }
    }
    for(i=0;i<n;i++)
        {
        for(j=0;a[i][j]!='\0';j++)
        a1[i][a[i][j]]++;
    }
    for(i=97;i<=122;i++)
        {
        for(j=0;j<n;j++)
            {
        if(a1[j][i]!=0)
            flag=1;
            else
                {
                flag=0;
                break;
            }
    }
        if(flag==1)
            count++;
    }
    cout<<count;
    return 0;
}

