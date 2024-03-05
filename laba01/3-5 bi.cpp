#include <iostream>
#include <chrono>
#include <random>
#include <algorithm>

using namespace std;

int full(int arr[], int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int m = left + (right - left) / 2;
        if(arr[m] == x){
            return m;
        }
        if(arr[m] < x){
            left = m + 1;
        }else{
            right = m - 1;
        } 
    }
    return -1;
}

int main(){
    for(int n = 100; n < 1000001; n += 10000 ){
       int* arr = new int[n];
        for (int i = 0; i < n; ++i){
            arr[i] = rand() % n;
        }
        for(int k = 0; k < n; ++k){
            for(int j = 0; j < n; ++j){
                if(arr[k] < arr[j]){
                    int t = arr[k];
                    arr[k] = arr[j];
                    arr[j] = t;
                }
            }
        }
        auto begin = std :: chrono :: steady_clock :: now();
        for (unsigned cnt = 100000; cnt != 0 ; --cnt)
            full(arr, n, n+1 );
        auto end = std :: chrono :: steady_clock :: now();
        auto time_span =
        std :: chrono :: duration_cast < std :: chrono :: microseconds >(end - begin);
        //std :: cout << "\n\n";
        std :: cout << time_span.count() << ',' ;
    }
    return 0;
}