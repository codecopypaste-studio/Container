#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
int n,a,max=-2000000000,min=2000000000;
cin>>n;	
for(int i;i<n;i++){
	cin>>a;
	if(a>=max)max=a;
	if(a<=min)min=a;
}
cout<<min<<endl;
cout<<max;
return 0;
}
