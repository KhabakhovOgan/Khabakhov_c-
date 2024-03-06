#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

void qsort_recursive(int *arr, int size) {
    int left = 0, right = size - 1;
    int mid = arr[left + (right - left) / 2];
    while(left <= right){
        while(arr[left] < mid){
            left++;
        }
        while(arr[right] > mid){
            right--;
        }
        if(left <= right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    if(right > 0){
        qsort_recursive(arr, right + 1);
    }
    if(left < size){
        qsort_recursive(&arr[left], size -left);
    }

}

int main(){
    int n = 10;
    int* arr = new int[n];
    for(int i = 0; i < n; ++i ){
        arr[i] = rand() % 100;
        cout << arr[i] << ',';
    }
    cout << endl;
    qsort_recursive(arr, n);
    for(int i = 0; i < n; ++i ){
        cout << arr[i] << ',';
    }
    delete[] arr;
    return 0;
}