#include <bits/stdc++.h>
using namespace std;
int prime(int a){
    if (a<2) return 0;
    for (int i=2;i*i<=a;i++){
        if (a%i==0) return 0;
    }
    return 1;
}
int main (){
    int a,b;
    cin>>a>>b;
    int c,d,e;
    c=(a+b);
    d=c+1;
    while (d>0){
        if (prime(d)){
            break;
        }
        d+=1;
    }
    cout<<(d-c);
    
}