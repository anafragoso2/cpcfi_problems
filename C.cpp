#include <bits/stdc++.h>
using namespace std;

void solve(){
    int s;
    cin >> s;
    if(s<9){
        cout<<s<<endl;
    }
    else{
        for(int i=9; i<=0 ; i--){
                s = s - i;
                cout << i;
            }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}