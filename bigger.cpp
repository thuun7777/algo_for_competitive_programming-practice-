#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,cnt; cin>>a>>b;
    cnt=0;
    while (a<=b){
        cnt++;
        a*=3;
        b*=2;
    }
    cout<<cnt;
}
