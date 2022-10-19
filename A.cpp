// Three Doors
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int k; //llave disponible
    cin >> k;
    int d[3]; // llaves detrás de la puerta
    //para llenar el arreglo
    for (int i=0; i<3; i++) {
        cin >> d[i];
    }
    int p=0;
    for (int i = 0; i<3; i++){
        if(d[k-1]!=0){//si el número que hay en la posición k-1 != 0
            k = d[k-1];// actualizar el valor de k con ese número
            p++;//contamos las pasadas
        }
    }
    if(p==2){
        cout << "YES"<<endl;
    }
    else{
        cout<<"NO"<<endl; 
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0; 
}