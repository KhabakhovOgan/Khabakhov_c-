#include <iostream>

#define N 10

using namespace std;

int main(){
    int arr[] = {0};
    int arr1[N] = {0};
    int arr2[N] = {2};
    for(int i = 0; i < N; ++i ){
        cout << arr1[i] << ' ' << arr2[i] << endl; 
    } 
    return 0;
}