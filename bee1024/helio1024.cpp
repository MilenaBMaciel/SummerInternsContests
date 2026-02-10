#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
 
int main() {
    int num, tam;
    string texto;
    
    cin >> num;
    cin.ignore();
	
    for(int i = 0; i < num; i++){
        getline(cin, texto);
        
        tam = texto.size();
        for(int j = 0; j < tam; j++){
            if((texto[j] >= 65 && texto[j] <=90) || (texto[j] >= 97 && texto[j] <=122)){
                texto[j] += 3;
            }
            
            if(j < (tam+1)/2){
                texto[j] -= 1;
            }
            
        }
        
        for(int j = tam-1; j >= 0; j--){
            cout << texto[j];
        }
        cout << "\n";
    }
 
 
    return 0;
}