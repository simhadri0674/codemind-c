#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,d;
    cin>>a;
    b=0;
    double c=0;
    for (int i=1;i<=a;i++){
        c+=1/(i*1.0);
    }
    printf("%.2f",c);
    
}