#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d,e;
    cin>>a>>b>>c;
    d=0;
    e=0;
    double s=0;
    s=(a+b+c)/2.0;
    double x=0;
    x=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",x);
    return 0;
}