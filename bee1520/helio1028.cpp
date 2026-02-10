#include <iostream>
#include <stdio.h>

using namespace std;

int mdc_r(int a, int b){
	if (b){
		return(mdc_r(b, a%b));
	}else{
		return a;
	}
}

int main() {
	int num, a, b;

	cin >> num;

	for(int i = 0; i < num; i++){
		cin >> a >> b;

		cout << mdc_r(a, b) << "\n";
	}

	return 0;
}