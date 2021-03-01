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
			int mtx1[m][n];
			int mtx2[m][n];

		//add value to array mtx1
		for (int im = 0; im < m; im++){
			for (int in = 0; in < n; in++){
				cin >> mtx1[im][in];
			}
	 	}

		//add value to array mtx2
		for (int im = 0; im < m; im++){
			for (int in = 0; in < n; in++){
				cin >> mtx2[im][in];
			}
	 	}

		//print value
		for (int im = 0; im < m; im++){
			for (int in = 0; in < n; in++){
				cout << mtx1[im][in] + mtx2[im][in] << " ";
			}
			cout << endl;
	 	}
	 }
}