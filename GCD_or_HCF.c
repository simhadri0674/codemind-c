#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b;
    c=a*b;
    d=0;
    for (int i=1;i<b;i++){
        d=a*i;
        if (d%b==0){
            break;
        }
    }
    cout<<floor(c/d);
}