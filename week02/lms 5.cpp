#include <iostream>
#include <cmath>

using namespace std;

bool is_square(uint64_t num) {
    uint64_t a = sqrt(num);
    return (a * a == num);
}  


int main(){
    int a;
    cin >> a;
    cout << is_square(a);

    return 0;
}