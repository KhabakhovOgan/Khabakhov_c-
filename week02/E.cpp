#include <iostream>
#include <string>

using namespace std;

long long int recursive(unsigned int N){
    if(N == 0 or N == 1){
        return 1;
    }
    return recursive(N - 1) + recursive(N - 2);
       
}

int main(){
    int N;
    cin >> N;
    cout << recursive(N) << endl;
    return 0;
}