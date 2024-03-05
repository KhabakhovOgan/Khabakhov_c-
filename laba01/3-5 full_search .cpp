#include <iostream>
#include <chrono>
#include <random>


using namespace std;

int full_search(int arr[], int n, int x){
    for(int i = 0; i < n; ++i){
        if(x == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    for(int n = 100; n < 1000001; n += 10000 ){
        //cout << n << ',';
        int* arr = new int[n];
        auto total_time = std::chrono::milliseconds(0);
        for(int j = 0; j < 10; ++j){
            for (int i = 0; i < n; i++){
                arr[i] = rand() % n;
            }
            auto begin = std :: chrono :: steady_clock :: now();
            for (unsigned cnt = 100000; cnt != 0 ; --cnt)
                full_search(arr, n, n+1000 );
            auto end = std :: chrono :: steady_clock :: now();
            auto time_span =
            std :: chrono :: duration_cast < std :: chrono :: milliseconds >(end - begin);
            total_time += time_span; 
        }
        auto average_time = total_time / 10;
        std :: cout << average_time.count() << ',' ;
        delete[] arr;
    }
    return 0;
}