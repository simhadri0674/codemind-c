#include <bits/stdc++.h>
using namespace std;
int prime(int a){
    if (a<2) return 0;
    for (int i=2;i*i<=a;i++){
        if (a%i==0) return 0;
    }
    return 1;
}
int main(){
    int a,b;
    cin>>a;
    b=0;
    for (int i=1;i<a;i++){
        if (a%i==0 && prime(i)){
            b +=1;
            cout<<i<<" ";
        }
    }
    if (b==0){
        cout<<"-1";
    }
    
}