#include <iostream>
#include <string>
using namespace std;

 int main() {
    string va;
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string under = "abcdefghijklmnopqrstuvwxyz";
    cin >> va;

   int sva = va.size(); //for counting

  //loop(sva) with compare string[] vs array a A to make decision(if else) to print message 
  //if(sva > 0)
  for (int i = 0; i < sva; i++){
  	for(int n = 0; n < 26; n++){
  		if (va[i] == upper[n]){
  			//expression that decision is return value true for uppercase
  			}
  	}
  }
 }