/*input บรรทัดแรก จำนวนเต็มบวก m,n (1 ≤ m,n ≤ 100) แสดงมิติของเมทริกซ์ 
บรรทัดที่ 2 ถึงบรรทัดที่ m + 1 จำนวนเต็ม n จำนวนในแต่ละบรรทัด แสดงสมาชิกของเมทริกซ์ที่หนึ่ง 
บรรทัดที่ m +2 ถึงบรรทัดที่ 2 · m +1 จำนวนเต็ม n จำนวนในแต่ละบรรทัด แสดงสมาชิกของเมทริกซ์ที่สอง 
**คุณสามารถสมมติได้ว่าสมาชิกของเมทริกซ์แต่ละตัวนั้น มีค่าไม่ต่ำกว่า −2 000000000 และไม่เกิน 2000000000

output จำนวนบรรทัดทั้งสิ้น m บรรทัด แต่ละบรรทัดแสดงสมาชิกของเมทริกซ์ผลลัพธ์ ในรูปแบบตามข้อมูลนำเข้า

m1n0 m1n1 m1n2
m2n0 m2n1 m2n2
*/

#include <iostream>
using namespace std;

 int main() {
     int m; //Row of matrix
	 int n; //Col of matrix
	 
	 cin >> m;
	 cin >> n;
	 
	 //int mtx[m][n];
	 //create ROW by using arrays.
	 if (m > 0 && m <= 100 && n > 0 && n<100) {
		 	n = n-1;
		 	m = m-1;
			int mtx[m][n];

		//add value to m,n 
		for (int im = 0; im <= m; im++){
			for (int in = 0; in <= n; in++){
				cin >> mtx[im][in];
			}
	 	}

	//	for (int im = 0; im <= m; im++){
	//		for (int in = 0; in <= n; in++){
	//			cout << mtx[im][in] << ", " ;
	//		}
	 //	}
		 cout << "print number: " << mtx[0][1];
	 }

	 //cout << mtx[2][1];

}