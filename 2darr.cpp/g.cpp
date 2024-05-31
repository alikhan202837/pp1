#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(arr[i][j] == arr[j][i]) cnt++;
        }
    }
    if(cnt == n*2) cout << "YES";
    else cout << "NO";
}
/*
3
4 2 1   00 01 02
2 6 3   10 11 12
1 3 9   20 21 22
*/