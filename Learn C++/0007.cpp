#include <cstdio>
#include <cmath>

using namespace std;

 int main(){
    int r;
     scanf ("%d", &r);

     //Euclidean geometry
     float eu = sqrt(r*r + r*r);

    //Taxicab geometry
     float taxi = r + r;

    printf("%f \n", eu);
    printf("%f", taxi);
     return 0;
 }