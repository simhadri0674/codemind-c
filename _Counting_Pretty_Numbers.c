#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        int b,c,d,e;
        d=0;
        e=0;
        cin>>b>>c;
        for (int i=b;i<=c;i++){
            d=i%10;
            if (d==2 || d==3 || d==5){
                e+=1;
            }
        }
        cout<<e<<"
";
    }
}