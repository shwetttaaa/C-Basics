#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
cin>>a; bool flag=0;
string s= to_string(a);
cout<<s<<endl;
for(int i=0;i<(s.size())/2;i++){
if( s[i]!=s[s.size() - i-1]){cout<<"no";flag=1;break;}

}
if(flag==1){
    

}
else cout<<"yes"<<endl;
}

