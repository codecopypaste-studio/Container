#include <cstdio>
//#include <utility>
#include <string>

using namespace std;

int main(){
    int num[3];
    char word[3];

    for(int i = 0; i < 3; i++) {scanf("%d", &num[0]);}
    for(int i = 0; i < 3; i++) {scanf("%c", word[0]);}

    printf("%d %d %d",num[0], num[1], num[2]);
    printf("%c%c%c", word[0], word[1], word[2]);

//    for(int im = 0; im < m; im++){ 
//        for (int in = 0; in < n; in++){
//            scanf("%d %d %d", &)
//        }
//    }
    return 0;
}