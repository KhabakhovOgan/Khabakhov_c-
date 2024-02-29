#include <iostream>

#define N 5

using namespace std;

void moveNegativeToEnd(int (&array)[N]){
    int k = 0;
    for(int i = N - 1; i > -1; --i){
        if(array[i] < 0){
            k += 1;
            if(i == N - 1){
                continue;
            }else{
                for(int j = i ; j < N - k; ++j){
                        int t = array[j];
                        array[j] = array[j+1];
                        array[j+1] = t;
                }
            }
        }
    }
}



int main(){
    int array[N] = {-4, 6, 1, -5, 0};
    moveNegativeToEnd(array);
    for(int i = 0; i < N; ++i){
        cout << array[i] << ' ';
    }

}