#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d,e;
    cin>>a;
    b=a;
    c=0;
    d=0;
    e=0;
    while (b>0){
        c=b%10;
        if (c%2==0){
            d +=1;
        }
        else e+=1;
        b=floor(b/10);
    }
    if (d>=1 && e>=1) cout<<"Mixed";
    else if (d==0 && e>1) cout<<"Odd";
    else cout<<"Even";
    return 0;
    
}