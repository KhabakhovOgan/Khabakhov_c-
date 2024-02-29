#include <iostream>

#define N 2
#define M 2

using namespace std;

void sort2d(int (&array)[N][M]){
	for(int a = 0; a < N; ++a){
		for(int b = 0; b < M; ++b){
			for(int i = 0; i < N; ++i){
				for(int j = 0; j < M; ++j){
					if(i + 1 == N and j + 1 == M){
						continue;
					}else{
						if(j + 1 == M and array[i][j] > array[i+1][0] ){
							int t = array[i][j];
							array[i][j] = array[i+1][0];
							array[i+1][0] = t;
						}else{
							if(array[i][j] > array[i][j+1]){
								int t = array[i][j];
								array[i][j] = array[i][j+1];
								array[i][j+1] = t;
							}
						}

					}
				}
			}
		}
	}
}

int main(){
	int array[N][M] = {0};
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < M; ++j){
			array[i][j] = rand() % 10;
		}
	}
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < M; ++j){
			cout << array[i][j] << ' ';
		}
	cout << endl;
	}
	sort2d(array);
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < M; ++j){
			cout << array[i][j] << ' ';
		}
	cout << endl;
	}
}
