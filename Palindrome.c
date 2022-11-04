#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a;
    b=a;
    c=0;
    d=0;
    while (b>0){
        c=b%10;
        d=d*10+c;
        b=floor(b/10);
    }
    if (a==d){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}