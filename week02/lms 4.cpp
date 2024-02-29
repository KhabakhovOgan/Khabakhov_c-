#include <iostream>

using namespace std;

bool is_powerof2(uint64_t a) {
    while (a != 1) {
        if (a % 2 != 0) {
            return false;
        }
        a /= 2;
    }
    
    return true;
}
    


int main(){
    int a;
    cin >> a;
    cout << is_powerof2(a);

    return 0;
}