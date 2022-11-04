#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b;
    c=abs(a-b*2);
    if (a==0 && b%2==0){
        cout<<"YES";
    }
    else if (a==0 && b%2!=0 ){
        cout<<"NO";
    }
    else if (c%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}