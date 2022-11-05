#include <bits/stdc++.h>
using namespace std;
int pal(int a){
    int b,c,d;
    b=a;
    c=0;
    d=0;
    while (b>0){
        d=b%10;
        c=c*10+d;
        b=floor(b/10);
    }
    if (a==c){
        return 1;
    }
    else return 0;
}
int main (){
    int a,b,c,d;
    cin>>a>>b;
    c=0;
    d=0;
    for (int i=a;i<=b;i++){
        if (pal(i)){
            cout<<i<<" ";
        }
    }
}