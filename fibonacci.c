#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a;
    b=0;
    c=1;
    d=0;
    cout<<b<<" "<<c<<" ";
    for (int i=1;i<(a-1);i++){
        d=b+c;
        b=c;
        c=d;
        cout<<d<<" ";
    }
}