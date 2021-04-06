#include <cstdio>
#include <string>

using namespace std;

int main(){
    int num[3],a,b,c;
    char cha[3];

	//receive int input 
    for(int i=0; i<3; i++) {scanf("%d", &num[i]);}
    
    
    if(num[0]<num[1] && num[0]<num[2]){
    	a=num[0];
    }
    //scanf("%s", &b);

    for(int i=0; i<3; i++) {printf("%d ", a[i]);}
    //for(int i=0; i<3; i++) {printf("%c", b[i]);}
    //printf("%s", b);

//    for(int im = 0; im < m; im++){ 
//        for (int in = 0; in < n; in++){
//            scanf("%d %d %d", &)
//        }
//    }
    return 0;
}