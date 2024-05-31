#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= 0; j--){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    // 00 01 02
    // 10 11 12
    // 20 21 22

    // 20 10 00 
    // 21 11 01 
    // 22 12 02

}