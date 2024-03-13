#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1;  
    int p1[n1][2];  
    for (int i = 0; i < n1; i++) {
        cin >> p1[i][0] >> p1[i][1];
    }
    cin >> n2;  
    int p2[n2][2];  
    for (int i = 0; i < n2; i++) {
        cin >> p2[i][0] >> p2[i][1];
    }
    int result[n1+n2-1][2] = {{0}};      
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            int degree = p1[i][1] + p2[j][1];
            result[degree][0] += p1[i][0] * p2[j][0];
            result[degree][1] = degree;
        }
    }
    int count = 0;
    for (int i = 0; i < n1+n2-1; i++) {
        if (result[i][0] != 0)
            count++;
    }
    cout << count << " ";
    for (int i = count-1; i > -1; i--) {
        if (result[i][0] != 0)
            cout << result[i][0] << " " << result[i][1] << " ";
    }
    return 0;
}

