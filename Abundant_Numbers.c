#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    cin>>a;
    b=0;
    c=0;
    for (int i=1;i<a;i++){
        if (a%i==0){
            c+=i;
        }
    }
    if (c>=a){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}