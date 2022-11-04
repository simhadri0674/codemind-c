#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a;
    b=0;
    c=1;
    d=0;
    while (a>0){
        d=a%10;
        b +=d;
        c *=d;
        a=floor(a/10);
    }
    if (b==c){
        cout<<"Spy Number";
    }
    else cout<<"Not Spy Number";
    
}