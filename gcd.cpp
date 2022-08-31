#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){

    for(int i=a;i<=a*b;i++){
        if(i%a==0 && i%b==0){return i;}
    }
    
}

int gcd(int a,int b){
        // int g;
        // int x=min(a,b);

    // for(int i=1;i<=x;i++)
    // {
    //     if(a%i==0 && b%i==0){g=i;}
    // }
    // return g;
// using recusrion
    if(b!=0){ return gcd(b,a%b);}
    else {return a;}

}

int main()
{   
    
int a,b;
cin>>a>>b;
cout<<lcm(a,b)<<endl;
cout<<gcd(a,b);
    
}

