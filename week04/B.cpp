#include <iostream>

using namespace std;

int main(){
    short int *ptr = new short int [10];
    for(int i = 1; i < 11; ++i){
        ptr[i] = i;
        cout << &ptr[i] << ' ';
    }
    cout << endl;
    for(int i = 1; i < 11; ++i){
        ptr[i] = i;
        cout << ptr[i] << ' ';
    }


}