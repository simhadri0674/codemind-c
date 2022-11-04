#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        int b,c,d,e;
        cin>>b;
        c=b;
        d=0;
        e=0;
        while (b>0){
            d=b%10;
            e=e*10+d;
            b=floor(b/10);
        }
        if (e==c){
            cout<<"True"<<"
";
        }
        else{
            cout<<"False"<<"
";
        }
    }
    
}