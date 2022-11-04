#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a>>b;
    c=0;
    d=0;
    for (int i=1;i<=b;i++){
        c=a*i;
        if (c%b==0){
            break;
        }

    }
    cout<<c;
}