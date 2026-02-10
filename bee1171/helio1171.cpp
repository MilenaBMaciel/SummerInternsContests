#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
	int num, input;
	map<int,int> dic;

	cin >> num;

	for(int i = 0; i < num; i++){
		cin >> input;

		dic[input] ++;
	}

	for (auto n : dic){
		cout << n.first << " aparece " << n.second << " vez(es)\n";
	}

	return 0;
}