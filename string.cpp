#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int nwords(string &s){
    
    int x=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){   
            x++;
        }}
        return x+1;
}
void cap(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&& s[i]<='z'){
            s[i]=s[i]-32;
        
        }
    }cout<<s<<endl;
}
void sml(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&& s[i]<='Z'){
            s[i]=s[i]+32;
        
        }
    }cout<<s<<endl;
}
void rev(string &s){
    string t;
    for(int i=s.size()-1;i>=0;i--){
       t.push_back(s[i]);
    }cout<<t<<endl;
}

// 

int main()
{
   string s;
   getline(cin,s); //ad space at last snetence
   s=s+" ";
   string word="";string lg=""; string sm="         ";
   for (int i = 0; i < s.length(); i++)
   { 
      if(s[i]!=' '){
          word=word+s[i];
      }
      else{
          if(word.size()>lg.size()){
              lg=word;
          }
          if(word.size()<sm.size()){ 
              sm=word;
          }
          word="";
      }
   }
 cout<<"larest word is: "<<lg<<endl;
 cout<<"shortest word is: "<<sm;
 
    
}

