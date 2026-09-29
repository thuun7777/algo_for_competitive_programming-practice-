#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        string s;
        int n;
        char c;
    //cout<<s;
        cin>>n>>c>>s;
        int i=0, j=n-1, cnt=0;
        n/=2;
        while(i<=n && i<j){
            if (s[i]!=s[j]){
                if (s[i]!=c && s[j]!=c){
                    cnt+=2;}
                else cnt++;
            }
            i++; j--;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
