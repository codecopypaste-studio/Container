#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int num[4],a=0,b=0,c=0;
    char cha[3];

	//receive int input 
    for(int i=0; i<3; i++) {scanf("%d", &num[i]);}
    
    //num[3]={0, 1, 2} eg. {1,2,3}
    //min
   	for(int ia=0; ia<3; ia++){
   	for(int in=0; in<3; in++){
   		if(num[ia]<num[in]){
   			if(a==0){ a = num[ia];}
   			else if(num[ia] < a){a = num[ia];}}}}
    		
    	//max
    	for(int ia=0; ia<3; ia++){
    	for(int in=0; in<3; in++){
    		if(num[ia]>num[in]){
    			if(c==0){c = num[ia];}
    			else if(num[ia] > c){c=num[ia];}}}}
    	
    	//middle
    	for(int ia=0; ia<3; ia++){
    	if(num[ia]>a & num[ia]<c){
    		b = num[ia];}}
    	
   //if(num[0]<num[1] & num[0]<num[2]){
   // 	a=num[0];
    //}
    
   //sample C A B
    scanf("%s", &cha);
    
    for(int i=0; i<3; i++){
    	char select = cha[i];
    	if(select == 'A'){cout << a;}
    	else if(select == 'B'){cout << b;}
    	else if(select == 'C'){cout << c;}}

//    for(int i=0; i<3; i++) {printf("%d ", a[i]);}
    //for(int i=0; i<3; i++) {printf("%c", b[i]);}
    //printf("%s", b);

//    for(int im = 0; im < m; im++){ 
//        for (int in = 0; in < n; in++){
//            scanf("%d %d %d", &)
//        }
//    }

//	cout << num[0] << ',' << num[1] << ',' << num[2] << endl;
//    cout << a << ',' << b << ',' << c << endl;
//    cout << cha;
    return 0;
}