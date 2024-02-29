#include <iostream>

using namespace std;

long long int recursive(unsigned int N){
    if(N == 0 or N == 1){
        return 1;
    }
    return N * recursive(N - 1);
       
}

int main(){
    unsigned int N;
    cin >> N;
    cout << recursive(N) << endl;
    return 0;
}