#include <bits/stdc++.h>
using namespace std;
int min(int a){
    int l,r;
    l=pow(2, floor(log2(a)));
    r=2*l;
    return min((a-l),(r-a));
}
int main (){
    int a,b,c;
    cin>>a;
    cout<<min(a);
    return 0;
    
}