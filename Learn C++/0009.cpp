#include <cstdio>
#include <string>

using namespace std;

int main(){
    int a[3];
    char b[4];

    for(int i=0; i<3; i++) {scanf("%d", &a[i]);}   
    for(int f=0; f<3; f++) {scanf("%c", &b[f]);}

    for(int i=0; i<3; i++) {printf("%d", a[i]);}
    //for(int i=0; i<3; i++) {printf("%c", b[i]);}
    printf("%c%c%c", b[0], b[1], b[2]);

//    for(int im = 0; im < m; im++){ 
//        for (int in = 0; in < n; in++){
//            scanf("%d %d %d", &)
//        }
//    }
    //return 0;
}