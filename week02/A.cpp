#include <iostream>

using namespace std;

int main(){
    unsigned int a;
    cin >> a;
    if(a % 4 == 0){
        if( a % 100 !=0){
            cout << "YES";
        }else if(a % 400 == 0){
            cout << "YES";
        }else {
            cout << "NO";
        }
    }else {
        cout << "NO";
    }    
       
    return 0;
}