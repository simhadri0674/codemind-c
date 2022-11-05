#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a;
    b=0;
    c=0;
    d=0;
    while (a>0){
        c=a%10;
        b=b*10+c;
        a=floor(a/10);
    }
    cout<<b;
    return 0;
}