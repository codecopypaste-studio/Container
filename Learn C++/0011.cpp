#include <iostream>
using namespace std;

int main(){
	//input integer wih 1 line 1 value
	int input[10];
	for (int i=0; i<10; i++){
		cin >> input[i];
	}

	//modulo input with 42
	int modulo[10];
	for(int i=0; i<10; i++){
		 modulo[i] = input[i]%42;
	}
	//conpare unmatch fraction value and counting the number as output
	for(int i=0; i<1000; i++){
		for(int n=0; n<10; n++){
		if(modulo[n]==i){}
	}}
}