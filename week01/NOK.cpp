#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c;
    cin >> a, b;
    c = max(a,b);
    //while(c % a == 0   &&  c % b == 0){
    //   c += 1;
    //}
    cout << c << endl;
    return 0;
}

