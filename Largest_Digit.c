#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a;
    b=0;
    c=0;
    d=0;
    while (a>0){
        b=a%10;
        if (b>d){
            d=b;
        }
        a=floor(a/10);
    }
    cout<<d;
}