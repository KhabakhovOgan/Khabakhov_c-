#include <iostream>

using namespace std;

int main(){
    long long int N, b;
    long long int M;
    long long int K;
    cin >> N >> M >> K;
    b = N;
    if (K == 0){
        cout << 1;
    }else{
        for( long long int i = 2; i <= M; i += 1){
            N *= b;
            N %= K;
        }
        cout << N;
    }
    return 0;
}