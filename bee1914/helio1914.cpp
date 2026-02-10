#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int num, num_a, num_b;
	string nome_a, nome_b, esq_a, esq_b, var;

	cin >> num;

	for (int i = 0; i < num; i++){
		cin >> nome_a >> esq_a >> nome_b >> esq_b;
		cin >> num_a >> num_b;

		if ((num_a + num_b)%2 == 0){
			var = "PAR";
		}else{
			var = "IMPAR";	
		}
		
		if(esq_a == var){
			cout << nome_a << "\n";
		}else{
			cout << nome_b << "\n";
		}
	}

	return 0;
}