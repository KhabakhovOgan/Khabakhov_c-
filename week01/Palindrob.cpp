#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    bool b = true;
    cin >> a;
    int c = a.length();
    for(int i = 0; i < c/2; i += 1) {
        if(a[i] != a[c - i -1]) {
        	b = false;
        }
    }
    if (b == false){
        cout << 0 << endl;
    }else {
        cout << 1 << endl;
    }
    return 0;
}