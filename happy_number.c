#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,s;
    cin>>a;
    b=a;
    c=0;
    s=0;
    while (b>0){
        c=b%10;
        s+=c*c;
        b=floor(b/10);
        if (b==0 && s>9){
            b=s;
            s=0;
        }
    }
    if (s==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}