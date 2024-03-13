#include <iostream>
using namespace std;

bool searchMatrix(int n, int m, int k, int matrix[100][100]) {
int row = 0, col = m - 1;
while(row < n && col >= 0){
if (matrix[row][col] == k) {
return true;
} else if (matrix[row][col] > k) {
col--;
} else {
row++;
}
}
return false;
}

int main(){
int n, m, k;
cin >> n >> m >> k;
int matrix[100][100];
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
cin >> matrix[i][j];
}
}
if (searchMatrix(n, m, k, matrix)) {
cout << "1";
}else {
cout << "0";
}
return 0;
}