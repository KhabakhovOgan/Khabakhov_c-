#include <iostream>

using namespace std;

double power_double(double, int);
double func(double, double, double, double);
double func2(int, double);

double func (double x, double a, double b, double c){
    return a * power_double(x, 2) + b * x + c;
}

double power_double(double x, int n){
    double result = x;
    for(int i = n; i > n; --i){
        result *=x ;
    }
    return result;
}

int recursive_fib(int n){
    if(n == 0 or n == 1){
        return 1;

    }
    if (n < 0){
        return -1;
    }
    return recursive_fib(n - 1) + recursive_fib(n - 2);
}

int main(){
    for(int i = 0; i < 45; ++i){
    cout << recursive_fib(i) << endl;
    }
    return 0;
} 
