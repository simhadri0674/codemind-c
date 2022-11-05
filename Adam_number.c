#include <bits/stdc++.h>
using namespace std;
int rev(int a){
    int b,c,d;
    b=0;
    c=0;
    while (a>0){
        b=a%10;
        c=c*10+b;
        a=floor(a/10);
    }
    return c;
}
int main (){
    int a,b,c,d;
    cin>>a;
    b=a*a;
    c=rev(a);
    d=c*c;
    int e,f,g;
    e=rev(d);
    if (b==e){
        cout<<"True";
    }
    else cout<<"False";
}