#include <iostream>

using namespace std;

long long int recursive(int n, int base){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return base;
    }
    return (recursive(n - 1, base) * base);
}

int main(){
    long long int a;
    long long int b = a;
    cin >> a;
    int base;
    cin >> base;
    while(a > 0){
        int M = 0;
        while(recursive(M, base) <= a){
            M++;
        }
        b = b / recursive(M-1, base);
        a = a % recursive(M-1, base);
        cout << b;
    }
    
    return 0;
}