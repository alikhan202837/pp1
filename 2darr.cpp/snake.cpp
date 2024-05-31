#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int cnt = 1;
    for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                for(int j = 0;j<m;j++){
                    arr[i][j] = cnt++;
                }
            }
            if(i % 2 == 1){
                for(int j = m-1;j>=0;j--){
                    arr[i][j] = cnt++;
                }
            }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
/*
00 01 02 03
10 11 12 13
20 21 22 23
*/