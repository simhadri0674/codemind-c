#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        int n,a,b,k;
        cin>>n>>a>>b>>k;
        if (floor(n/a)>=k || floor(n/b)>=k){
            cout<<"Win"<<"
";
        
        }
        else{
            cout<<"Lose"<<"
";
        }
    }
}