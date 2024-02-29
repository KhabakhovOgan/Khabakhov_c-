#include <iostream>

#define N 4

using namespace std;

int findLastZero(int (&array)[N]){
	if(array[0] == 1){
		return -1;
    }
	int a = 0;
    for(int i = 0; i < N; ++i){
    	a += array[i];
	}
    return N - a -1;
}

int main(){
    int arr[N];
    cin >> arr[N];
    cout << findLastZero( arr );
    return 0;

}