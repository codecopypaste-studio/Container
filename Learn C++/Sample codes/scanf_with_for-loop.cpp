//แสดงโค๊ดการนำเข้า input แบบบันทัดเดียว เข้าไปสู่ array 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
int main(){
    int a[10], b[10];
    for (int i=0; i<10; i++){ scanf("%d", &a[i]); }
    for (int i=0; i<10; i++){ cin >> b[i]; }

    for (int i=0; i<10; i++){ printf("a-%d ",a[i]); cout << "b-" << b[i] << " ";}

    return 0;
}
