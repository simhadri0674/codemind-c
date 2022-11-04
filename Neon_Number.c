#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a;
    b=a*a;
    c=0;
    d=0;
    while (b>0){
        d=b%10;
        c +=d;
        b=floor(b/10);
    }
    if (a==c){
        cout<<"Neon Number";
    }
    else{
        cout<<"Not Neon Number";
    }
}