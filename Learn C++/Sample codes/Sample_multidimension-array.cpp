#include <iostream>
using namespace std;

 int main() {
     int m; //Row of matrix
	 int n; //Col of matrix
	 
	 // user define 2 dimension of matrix
	 cin >> m >> n;
	 
	 
	 //create COL ROW by using arrays.
	 if (m > 0 && m <= 100 && n > 0 && n<100) {
		 	n = n;
		 	m = m;
			int mtx[m][n];

		//add value to array 
		for (int im = 0; im < m; im++){
			for (int in = 0; in < n; in++){
				cin >> mtx[im][in];
			}
	 	}

		//print value
		for (int im = 0; im < m; im++){
			for (int in = 0; in < n; in++){
				cout << mtx[im][in] << " ";
			}
			cout << endl;
	 	}
	 }
}