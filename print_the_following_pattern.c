#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    cin>>a;
    for (int i=a;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
    
}