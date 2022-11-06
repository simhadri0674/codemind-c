#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    cin>>a;
    c=0;
    if (a==1){
        cout<<"Ugly Number";
    }
    
    else{
        for (int i=1;i<=a;i++){
            if (a%i==0){
                if (i==2 || i==3 || i==5){
                    c +=1;
                }
            }
        }
        if (c==0) cout<<"Not Ugly Number";
        else cout<<"Ugly Number";
    }
    
}