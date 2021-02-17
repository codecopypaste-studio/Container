#include <iostream>
#include <stdio.h>
using namespace std;

 int main() {
	int n; //size for array index
	cin >> n;

	int index[n]; //index table		
		for (int i = 0; i < n; i++){
			cin >> index[i];
		 }

	cout << index[2];
}
