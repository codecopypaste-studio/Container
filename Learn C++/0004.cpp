#include <iostream>
#include <string>
using namespace std;

 int main() {
    string input;//input
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string under = "abcdefghijklmnopqrstuvwxyz";
    bool capital; bool small; //use in decision
    bool pass1;//use to continue checking letter
    bool pass2;
    cin >> input;

   int sizein = input.size(); //for counting

  //loop(sizein) with compare string[] vs array a A to make decision(if else) to print message 
  //if(sizein > 0)

  //expression to check non letter text
  for(int i = 0; i < sizein; i++){
  	for(int n = 0; n < 26; n++){
  		if (input[i] == upper[n]){pass1 = true;break;} else {pass1 = false;}
         cout << input[i] << upper[n] << pass1 << endl;         
  	}
  }
  
    for(int i = 0; i < sizein; i++){
  	for(int n = 0; n < 26; n++){
      	if (input[i] == under[n]){pass2 = true;break;} else {pass2 = false;}
         cout << input[i] << under[n] << pass2 << endl;
  	}
  }
      cout << pass1 << pass2 << endl;

   if (pass1 || pass2) {
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

      if (capital == true && small == false){
         cout << "All Capital Letter";
      } else if(capital == false && small == true){
         cout << "All small Letter";
      } else if(capital == true || small == true) {
         cout << "Mix";
      }
   }

   cout << sizein << pass1 << pass2;   
   return 0;
 }