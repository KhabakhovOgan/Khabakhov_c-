#include <iostream>

using namespace std;

int main(){
    bool b = true;
    int a;
    cin >> a;
    for(int i = 2; i <= a/2; i++ ){
        if(a % i == 0){
            b = false;
        }
    }
    if(b == false){
        cout << "NO";
    }else{
        cout << "YES";
    }
     
    return 0;
}