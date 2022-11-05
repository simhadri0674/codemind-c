#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        int b,c,d,e;
        e=1;
        d=0;
        cin>>b;
        for (int j=1;j<=b;j++){
            e *=j;
        }
        cout<<e<<"
";
    }
}