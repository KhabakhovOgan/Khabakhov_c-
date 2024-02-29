#include <iostream>

using namespace std;

long long int recursive(int M){
    if(M == 0){
        return 1;
    }
    if(M == 1){
        return 2;
    }
    return recursive(M - 1) * 2;
}

int main(){
    int N;
    cin >> N;
    long long int a;
    for(int i = 1; i <= N; i += 1 ){
        int M = 0;
        cin >> a;
        while(recursive(M) <= a){
            M++;
        }
        cout << M-1 << endl;

    }
    return 0;
}