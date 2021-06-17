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
		 modulo[i] = input[i]%3;
	}
	//compare unmatch fraction value and counting the number as output
	//find differnce of i0 - i9 (10 position)
	int V[10];
	int a=0;
	for(int i=0; i<10; i++){
		if(i==0){V[a] = modulo[i]; a=a+1;} //set first value for V-array
		
		/*set value to next v-array*/
		for(int n=i+1; n<10; n++){
			if(modulo[n]!=modulo[i]){
				V[a]=modulo[n];
				a=a+1;
				}
		}
		

//			for(int n=i+1; n<10; n++){
//				if(modulo[i]==modulo[n]){}}
	}
	for(int i = 0; i<10; i++){
	cout << modulo[i] << ", ";
	}
	
	cout << "\n";
	
	for(int i=0; i<10; i++){
	cout << V[i] << ", ";
	}
}
