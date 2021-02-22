/*input บรรทัดแรก จำนวนเต็มบวก m,n (1 ≤ m,n ≤ 100) แสดงมิติของเมทริกซ์ 
บรรทัดที่ 2 ถึงบรรทัดที่ m + 1 จำนวนเต็ม n จำนวนในแต่ละบรรทัด แสดงสมาชิกของเมทริกซ์ที่หนึ่ง 
บรรทัดที่ m +2 ถึงบรรทัดที่ 2 · m +1 จำนวนเต็ม n จำนวนในแต่ละบรรทัด แสดงสมาชิกของเมทริกซ์ที่สอง 
**คุณสามารถสมมติได้ว่าสมาชิกของเมทริกซ์แต่ละตัวนั้น มีค่าไม่ต่ำกว่า −2 000000000 และไม่เกิน 2000000000

output จำนวนบรรทัดทั้งสิ้น m บรรทัด แต่ละบรรทัดแสดงสมาชิกของเมทริกซ์ผลลัพธ์ ในรูปแบบตามข้อมูลนำเข้า
*/
#include <iostream>
using namespace std;

 int main() {
     int m; //Row of matrix
	 int n; //Col of matrix
	 
	 cin >> m;
	 cin >> n;
	 
	 //create ROW by using arrays.
	 if (m > 0 && m <= 100 && n > 0 && n<100) {
	 	for (int i = 0; i <= m; i++){
			 int mtx[m][n];
			 return mtx[m][n];
		 }
	 }
	 	
}