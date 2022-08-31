#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    if(n==0||n==1){ return 1;}
    else {
        for(int i=2;i<=n/2;i++){
            if(n%i==0){ return 0;}
        } return 1;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    for (int i = a;i<=b ;i++)
    {
       if( prime(i)==1){
           cout<<i<<" ";
       }
    }
    
    
}

