#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    b=0;
    cin>>a;
    for (int i=1;i<a;i++){
        if (a%i==0)
            b +=i;
    }
    if (b==a)
        cout<<"True";
    
    else
        cout<<"False";
}