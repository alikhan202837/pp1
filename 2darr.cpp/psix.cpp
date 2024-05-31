#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            a[i][j] = 0;
        }
    }
    int cnt = 1;
    for(int i = 0;i<n+m-1;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0;k<m;k++){
                if(k+j == i){
                    a[j][k] = cnt++;
                } 
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
// 3 5
// 00 01 02 03 04
// 10 11 12 13 14
// 20 21 22 23 24