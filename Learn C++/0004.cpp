#include <iostream>
#include <string>
using namespace std;

 int main() {
    string input;//input
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string under = "abcdefghijklmnopqrstuvwxyz";
    bool capital; bool small; //use in decision
    bool exception1 = false;//use to continue checking letter
    bool exception2 = false;
    cin >> input;

   int sizein = input.size(); //for counting

  //loop(sizein) with compare string[] vs array a A to make decision(if else) to print message 
  //if(sizein > 0)

  //expression to check non letter text
  for(int i = 0; i < sizein; i++){
  	for(int n = 0; n < 26; n++){
  		if (input[i] != upper[n]){exception1 = true;}
         cout << input[i] << upper[n] << exception1 << endl;
      if (input[i] != under[n]){exception2 = true;}
         cout << input[i] << under[n] << exception2 << endl;
  	}
  }

   if (exception1 && exception2) {
 
   } else {
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

   cout << sizein << exception1 << exception2;

   //Decision output answer
 //  if (capital == true && small == false){
 //     cout << "All Capital Letter";
 //  } else if(capital == false && small == true){
 //     cout << "All small Letter";
 //  } else if(capital == true || small == true) {
 //     cout << "Mix";
 //  } else {
 //       cout << "nothing";
 //  }
   
   return 0;
 }