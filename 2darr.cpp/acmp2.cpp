#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n;i++){
        for(int j = 0;j<n;j++){
            if(j == i) cout << "0 ";
            if(i < j || i > j) {
                cout << abs(i - j) << " ";
            }
        }
        cout << endl;
    }
}
/*
0 1 2 3 4
1 0 1 2 3
2 1 0 1 2
3 2 1 0 1
4 3 2 1 0
*/