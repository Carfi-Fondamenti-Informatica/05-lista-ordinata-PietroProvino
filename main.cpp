#include <iostream>
using namespace std;
int main() {
    int lista[10];
    for(int i=0;i<10;i++){
        cin >> lista[i];
    }
    int a=0, b=0;
    cin >> a;
    for(int i=0;i<10;i++){
        for(int j=0; j<i;j++){
            if(lista[i]<lista[j]){
                b=lista[i];
                lista[i]=lista[j];
                lista[j]=b;
            }
        }
    }
    if(a<=lista[9]){
       lista[9]=a;
    }
    for(int i=0;i<10;i++){
        for(int j=0; j<i;j++){
            if(lista[i]<lista[j]){
                b=lista[i];
                lista[i]=lista[j];
                lista[j]=b;
            }
        }
    }

    for(int i=0;i<10;i++){
        cout << lista[i] << " ";
    }
    return 0;
}
