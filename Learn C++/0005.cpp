#include <iostream>
#include <cmath>

using namespace std;

 int main() {
	double a,b; double c;
	cin >> a >> b;

	a = a*a; b = b*b;
	c = sqrt(a+b);
 	printf("%.6lf",c);
	return 0;
}