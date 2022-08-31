
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
if(n==0||n==1){return n;}
return fib(n-1)+fib(n-2);
}
int main(){
// int a=0;
// int b=1;
// int next=0;
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//   cout<<a<<" ";
//   next=a+b;
//   a=b;
//   b=next;
int n;cin>>n;int i=0;
// int p=fib(n);
// cout<<n<<"th term  of fibonaci series is ; "<<p<<endl
while(i<n){
    cout<<fib(i)<<" ";i++;
}

}

       
