#include <cstdio>
#include <cmath>

using namespace std;

 int main(){
    double r;
     scanf ("%lf", &r);

     //Euclidean geometry area
     double eu = 3.1415926535897932384626433832795*(r*r); //area of circle 

    //Taxicab geometry area
     double txi = (r*r)*(0.5)*4; //area of triangle x 4

    printf("%lf \n", eu);
    printf("%lf \n", txi);
     return 0;
 }