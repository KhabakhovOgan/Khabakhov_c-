#include <iostream>
#include <string>

using namespace std;

long long int recursive(int N, int M){
    if(M == 0){
        return 1;
    }
    if(M == 1){
        return N;
    }
    return recursive(N, M - 1) * N;
       
}

int main(){
    int N;
    int M;
    cin >> N >> M;
    cout << recursive(N, M) << endl;
    return 0;
}