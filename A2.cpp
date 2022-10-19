// Perfect Permutation
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l; 
    vector <int> p;
    int indice; //indice del arreglo
    cin >> l; // longitud del arreglo
    if (l == 1){
        cout << l << endl; 
    }
    else {
        //construimos un arreglo
        for(int i=1; i<=l; i++){
            p.push_back(i);
        }
        for(int i=1; i<=l-1; i++){
            indice =p[i-1];
            p[i-1] = p[i];
            p[i] = indice;

        }
        
        //imprimimos el vector modificado:
        for(int j=0; j<p.size(); j++){
            std::cout << p.at(j) << ' ';
        }
    }
}

int main(){
    int t; 
    cin >> t;
    while(t--) solve();

}