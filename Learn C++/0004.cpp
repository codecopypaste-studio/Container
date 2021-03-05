#include <iostream>
#include <string>
using namespace std;

 int main() {
    string input;//input
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string under = "abcdefghijklmnopqrstuvwxyz";
    bool capital; bool small; //use in decision
   
    cin >> input;

   int sizein = input.size(); //for counting

  //loop(sizein) with compare string[] vs array a A to make decision(if else) to print message 
  //if(sizein > 0)

  //expression to check capital size text
  for (int i = 0; i < sizein; i++){
  	for(int n = 0; n < 26; n++){
  		if (input[i] == upper[n]){
  			capital = true;}
  	}
  }

   //expression to check small size text
   for (int i = 0; i < sizein; i++){
  	   for (int n = 0; n < 26; n++){
  		   if (input[i] == under[n]){
  			   small = true;}
  	}
  }

   cout << capital << small;

   //Decision output answer
   if (capital == true && small == false){
      cout << "All Capital Letter";
   } else if(capital == false && small == true){
      cout << "All small Letter";
   } else if(capital == true || small == true) {
      cout << "Mix";
   } else {
           
   }
   return 0;
 }