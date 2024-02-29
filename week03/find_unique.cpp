#include <iostream>

#define N 5

using namespace std;

/*int find_unique(int (&a)[N]){
    int l = 0;
    int k = 0;
    for(int i = 0; i < N; ++i){
        int k = 0;
        for(int j = 0; j < N; ++j){
            if(a[i] == a[j]){
                k += 1;
            }
        }
        if(k % 2 != 0){
            l = a[i];
            break;
        }
    }
    return l;
}*/


int find_unique(int (&a)[N]) {
  int unique = 0;

  for (int i = 0; i < N; ++i) {
    unique ^= a[i];
  }

  return unique;
}

int main(){
    int a[N] = {1, 2, 1, 5, 2};
    cout << find_unique(a);

}