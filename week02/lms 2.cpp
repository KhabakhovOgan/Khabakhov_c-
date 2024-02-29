#include <iostream>

using namespace std;

unsigned long long redux(unsigned long long a) {
    if(a > 9){
        int b = a;
        a = 0;
        while(b > 0){
            a += b % 10;
            b = b / 10;
            }
        return redux(a);
    }else{
        return a;
    }
    
}
    


int main(){
    int a;
    cin >> a;
    cout << redux(a);

    return 0;
}