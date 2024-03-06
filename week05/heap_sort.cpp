#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

void heap(int *arr, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if (largest != i){
        swap(arr[i], arr[largest]);
        heap(arr, n, largest);
    }
}

void heap_sort(int *arr, int size) {
    for (int i = size / 2 - 1; i >= 0; i--){
        heap(arr, size, i);
    }
    for (int i=size-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heap(arr, i, 0);
    }

}

int main(){
    int n = 10;
    int* arr = new int[n];
    for(int i = 0; i < n; ++i ){
        arr[i] = rand() % 59;
        cout << arr[i] << ',';
    }
    cout << endl;
    heap_sort(arr, n);
    for(int i = 0; i < n; ++i ){
        cout << arr[i] << ',';
    }
    delete[] arr;
    return 0;
}