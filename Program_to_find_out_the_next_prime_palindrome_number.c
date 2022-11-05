#include <bits/stdc++.h>
using namespace std;
int prime(int a){
    if(a<2) return 0;
    for (int i=2;i*i<=a;i++){
        if (a%i==0) return 0;
    }
    return 1;
}
int pal(int e){
    int b,c,d;
    b=e;
    c=0;
    d=0;
    while (b>0){
        d=b%10;
        c=c*10+d;
        b=floor(b/10);
    }
    if (c==e) return 1;
    else return 0;
}
int main (){
    int a,b;
    cin>>a;
    b=a+1;
    while (a>0){
        if (prime(b)){
            if (pal(b)){
                break;
            }
        }
        b +=1;
    }
    cout<<b;
}