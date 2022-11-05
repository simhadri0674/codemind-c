#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a;
    for (int i=0;i<a;i++){
        int b,c,d;
        cin>>b;
        c=0;
        c=sqrt(b);
        d=floor(b/c);
        if(b%c==0) cout<<"True"<<"
";
        else cout<<"False"<<"
";
    }
}