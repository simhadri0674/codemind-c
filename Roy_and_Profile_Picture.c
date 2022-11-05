#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    for (int i=0;i<b;i++){
        int c,d;
        cin>>c>>d;
        if ((c==a && d==a) || (c>a && d>a && c==d)) cout<<"ACCEPTED"<<"
";
        else if (c<a || d<a) cout<<"UPLOAD ANOTHER"<<"
";
        else cout <<"CROP IT"<<"
";
    }
}