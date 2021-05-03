#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int num[4],a=0,b=0,c=0;
    char cha[3];

	//receive int input 
    for(int i=0; i<3; i++) {scanf("%d", &num[i]);}
    
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
    
   //sample C A B
    scanf("%s", &cha);
    
    for(int i=0; i<3; i++){
    	char select = cha[i];
    	if(select == 'A'){cout << a << ' ';}
    	else if(select == 'B'){cout << b << ' ';}
    	else if(select == 'C'){cout << c << ' ';}}

    return 0;
}