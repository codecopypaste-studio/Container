#include <cstdio>
#include <string>

using namespace std;

int main(){
    int arr1[3];
    string arr2[3];
    //int a, b, c;

    scanf("%d %d %d", &arr1[0], &arr1[1], &arr1[2]);
    scanf("%s%s%s", &arr2[0], &arr2[1], &arr2[2]);
    
     printf("%d %d %d", arr1[0], arr1[1], arr1[2]);
     printf("%s %s %s", arr2[0], arr2[1], arr2[2]);

    return 0;
}