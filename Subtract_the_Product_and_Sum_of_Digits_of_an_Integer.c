#include <bits/stdc++.h>
using namespace std;
int main (){
    int s;
    cin>>s;
    int a,b,c,x;
    x=0;
    a=0;
    b=0;
    c=1;
    a=s;
    while (a>0){
        x=a%10;
        b +=x;
        c *=x;
        a=floor(a/10);
    }
        
    cout<<(c-b);
}