#include <iostream>
using namespace std;

int main(){
	//input integer wih 1 line 1 value
	int input[5];
	for (int i=0; i<5; i++)
	{
		cin >> input[i];
	}

	//modulo input with 42
	int mod[5];
	for(int i=0; i<5; i++)
	{
		 mod[i] = input[i] % 3;
	}
	
	//compare unmatch fraction value and counting the number as output
	//find differnce of i0 - i9 (10 position)
	int sort[5]={};
	int a=0;
	
	for(int i=0; i<5; i++)
	{
		if(i==0)
		{	
			sort[a]=mod[i];
			cout << "start: ";
			cout << a << " ";
			a++;
			//continue;
		}
		else
		{
			for(int n=0; n<a; n++)
			{
				if(a<5)
				{
					sort[a]=mod[n];
					a++;
					//continue;
				}
				else
				{
					//continue;
					//nouse
				}

				cout << a << " ";
			}
		}
	}
	
	cout << "end. ";

/*
	//set first value for V-array
	for(int i=0; i<3; i++){
		if(i==0){
			sort[a]=mod[i];
			a=a+1;
			} 
		
		/*set value to next v-array*
		for(int n=i+1; n<3; n++){
			if(mod[n]!=mod[i]){
				sort[a]=mod[n];
				a=a+1;
				}
		}
	
//			for(int n=i+1; n<10; n++){
//				if(modulo[i]==modulo[n]){}}
	}
*/

	for(int i = 0; i<5; i++)
	{
	cout << input[i] << " ";
	}
	
	cout << "\n";

	for(int i = 0; i<5; i++)
	{
	cout << mod[i] << " ";
	}
	
	cout << "\n";
	
	for(int i = 0; i<5; i++)
	{
	cout << sort[i] << " ";
	}
}
