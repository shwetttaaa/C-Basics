#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,r;
    cin>>n;
    int temp=n;
    int sum =0;
    while(n!=0){
       r=n%10;
       sum=sum+r*r*r;
       n/=10; 
    }
    
    if(sum==temp){
        cout<<"yes";
    }
    else {cout<<"no";}
}

