#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int k;
    cin >> k;
    if(k == 0){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i == j) cout << arr[i][j] << " ";
            }
        }
    }
    else if(k > 0){
        for(int i = 0;i < n;i++){
            for(int j = 0 ;j < n; j++){
                if(i == j + k) cout << arr[i][j] << " ";
            }
        }
    }
    else if(k < 0){
        for(int i = 0;i<n;i++){
            for(int j = 0; j<n;j++){
                if(j == i - k) cout << arr[i][j] << " ";
            }
        }
    }
    
  return 0;
}