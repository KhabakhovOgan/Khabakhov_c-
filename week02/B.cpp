#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    int b = 0;
    cin >> a;
    while(a != 0){
        if(a % 2 == 0){
            b++;
        }
        cin >> a;
    }
    cout << b << endl;
    return 0;
}