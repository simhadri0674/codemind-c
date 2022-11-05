#include <bits/stdc++.h>
using namespace std;
int prime (int a){
    if (a<2) return 0;
    for (int i=2;i*i<=a;i++){
        if (a%i==0) return 0;
    }
    return 1;
}
int main (){
    int a;
    cin>>a;
    int b,c,d,e,f;
    c=a;
    d=a;
    e=0;
    f=0;
    int x,y ;
    x=0;
    y=0;
    while (c>0){
        if (prime(c)) {
            x=c;
            break;
        }
        c +=1;
    }
    while (d>0){
        if (prime(d)){
            y=d;
            break;
        }
        d -=1;
    }
    e=abs(c-a);
    f=abs(d-a);
    if (e==f) cout<<e<<"
";
    else if (e<f) cout<<e<<"
";
    else cout<<f<<"
";
}