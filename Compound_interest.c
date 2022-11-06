#include <bits/stdc++.h>
using namespace std;
int main (){
    int p,r,t;
    cin>>p>>r>>t;
    double c=0;
    c=p*(pow((1+(r/100.0)),t));
    printf("%.2f",c);
}