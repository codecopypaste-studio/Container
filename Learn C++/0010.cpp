#include <iostream>
using namespace std;

int main(){
	//input string
	string txt;
	cin >> txt;

	//find lenght string and give it to n
	int n = txt.length();

	//made box value give it 1 0 0 cuz trickster always place an object at box1 first 
	int box1=1, box2=0, box3=0;

	//run swap position trough n time by type of string that's read.
	for(int i=0; i<n; i++){
		if(txt=="A"){
			int tm1 = box1;
			int tm2 = box2;
			box1 = tm2;
			box2 = tm1;
		}
		else if(txt=="B"){
			int tm2 = box2;
			int tm3 = box3;
			box2 = tm3;
			box3 = tm2;
		}
		else if(txt=="C"){
			int tm1 = box1;
			int tm3 = box3;
			box1 = tm3;
			box3 = tm1;
		}
	}
	
	//find value and print
	cout << box1 << " " << box2 << " " << box3;
	
	
	
}