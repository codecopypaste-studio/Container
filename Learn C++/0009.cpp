#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int num[4],a=0,b=0,c=0;
    char cha[3];

	//receive int input 
    for(int i=0; i<3; i++) {scanf("%d", &num[i]);}
    
    //num[3]={0, 1, 2} eg. {20,10,50}
    //min
    for(int ia=0; ia<3; ia++){
    	for(int in=0; in<3; in++){
    		if(num[ia]<num[in] || num[ia]<a){ a = num[ia];}}}
    		
    	//max
    	for(int ia=0; ia<3; ia++){
    	for(int in=0; in<3; in++){
    	if(num[ia]>num[in] || num[ia]>c){c = num[ia];}}}
    	
    	//middle
    	for(int ia=0; ia<3; ia++){
    	for(int in=0; in<3; in++){
    	if(num[ia]>a && num[ia]<c){
    		b=num[ia];}}}
    	
    if(num[0]<num[1] && num[0]<num[2]){
    	a=num[0];
    }
    
    cout << num[0] << num[1] << num[2];
    cout << a << b << c;
    //scanf("%s", &b);

//    for(int i=0; i<3; i++) {printf("%d ", a[i]);}
    //for(int i=0; i<3; i++) {printf("%c", b[i]);}
    //printf("%s", b);

//    for(int im = 0; im < m; im++){ 
//        for (int in = 0; in < n; in++){
//            scanf("%d %d %d", &)
//        }
//    }
    return 0;
}