#include <iostream>

using namespace std;

unsigned long long redux(unsigned long long a) {
    int i = 0;
    while(a > 1){
        if(a % 2 == 0){
            a = a / 2;
        }else{
            a = 3*a + 1;
        }
        i += 1;
    }
    return i;
    
}
    


int main(){
    int a;
    cin >> a;
    cout << redux(a);

    return 0;
}