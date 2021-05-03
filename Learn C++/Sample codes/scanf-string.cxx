//แสดงโค๊ดการนำเข้า input แบบบันทัดเดียว เข้าไปสู่ array 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
int main(){
    char a[3];
    for(int i=0; i<3; i++){scanf("%c", &a[i]);}

    for(int i=0; i<3; i++){printf("%c",a[i]);}

    return 0;
}
