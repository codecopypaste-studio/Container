#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

 int main() {
	int n; //size for array index
	cin >> n;

	int index[n]; //index table		
		for (int i = 0; i < n; i++){
			cin >> index[i];
		 }

	cout << *min_element(index, index + n) << endl;
	cout << *max_element(index, index + n);

	return 0;
}
