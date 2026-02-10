#include <iostream>
#include <map>

using namespace std;

int main(){
    int num, a, b, alvo;

    while(cin >> num){
        map<int, int> m;

        for(int i = 0; i < num; i++){
            cin >> a >> b;
            
            for(int j = a; j <= b; j++){
                m[j]++; 
            }
        }

        cin >> alvo;

        int ini = -1, fim = -1;
        int cont = 0;

        for (auto const& [tamanho, quantidade] : m){
            if (tamanho < alvo){
                cont += quantidade;
            } else if(tamanho == alvo){
                ini = cont;
                fim = cont + quantidade - 1;
                break;
            } else {
                break;
            }
        }
        
        if(ini != -1){
            cout << alvo << " found from " << ini << " to " << fim << "\n";
        }else{
            cout << alvo << " not found" << "\n";
        }
    }

    return 0;
}