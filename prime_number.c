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
    int a;
    cin>>a;
    if (prime(a)){
        cout<<"prime";
    }
    else{
        cout<<"not a prime";
    }
}