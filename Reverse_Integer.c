#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d,e,f,g,h;
    cin>>a;
    b=0;
    c=0;
    d=0;
    e=0;
    f=a;
    g=0;
    h=0;
    if (a<0){
        b=a*-1;
        while (b>0){
            c=b%10;
            d=d*10+c;
            b=floor(b/10);
        }
        c=d*-1;
        cout<<c<<"
";
    }
    else {
        while (f>0){
            e=f%10;
            g=g*10+e;
            f=floor(f/10);
        }
        cout<<g<<"
";
        
    }
}