int gcd(int a,int b){

    for(int i=2;i<=min(a,b);i++){
        if(a==0||b==0){return 0;}
        if(a==b){return a;}
        if(i%a==0&&i%b==0){return i;}
    }
    
}