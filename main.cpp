#include <iostream>
using namespace std;
int main() {
    int lista[10];
    for(int i=0;i<10;i++){
        cin >> lista[i];
    }
    int a=0;
    int scambio[1];
    cin >> a;
    for(int i=0;i<10;i++){
        for(int j=0; j<i; j++){
            if(lista[i]<lista[j]){
                scambio[0]=lista[i];
                lista[i]=lista[j];
                lista[j]=scambio[0];
            }
        }
    }
    for(int i=0;i<10;i++){
        cout << lista[i] << " ";
    }
    return 0;
}
