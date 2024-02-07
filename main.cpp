#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=0,a,b;
    cin >>a>>b;
    while (b>=a)
    {
        i++;
        a*=3;
        b*=2;
    }
    cout<<i;
    

    return 0;
}