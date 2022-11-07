#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    d=0;
    for (int i=a;i<=b;i++){
        if(i%c==0)
        {
            d+=1;
            
        }
    }
    cout<<d;
}