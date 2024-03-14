#include <iostream>
#include <chrono>

using namespace std;

int bi_search(int arr[], int n, int x){
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
    for(int n = 100; n < 1000001; n += 1000 ){
        //cout << n << ',';
        int* arr = new int[n];
        auto total_time = std::chrono::microseconds(0);
        for(int j = 0; j < 10; ++j){
            for (int i = 0; i < n; ++i){
                arr[i] = i;
            }
            int b = n + 100000;
            auto begin = std :: chrono :: steady_clock :: now();
            for (unsigned cnt = 100000; cnt != 0 ; --cnt)
                bi_search(arr, n, b );
            auto end = std :: chrono :: steady_clock :: now();
            auto time_span =
            std :: chrono :: duration_cast < std :: chrono :: microseconds >(end - begin);
            total_time += time_span; 
        }
        auto average_time = total_time / 10;
        std :: cout << average_time.count() << ',' ;
        delete[] arr;
    }
    return 0;
}