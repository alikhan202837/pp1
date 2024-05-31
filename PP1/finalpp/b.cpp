#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sizeup = 2*n - 1;
    int sizedown = 4*n - 1;
    int mid = sizedown/2;
    int mid1 = -1;
    int mid2 = -1;
    for(int i = 0; i <= sizeup; i++){
        for(int j = 0; j < sizedown; j++){
            if(i == n){
                mid1 = sizeup/2;
                mid2 = mid1 + 2*n;
            }
            if((j == mid && i == 0) || (j == mid + i || j == mid - i) || (i == sizeup && j != mid) || (i == sizeup/2 && j >= n && j <= sizedown - n - 1) || (mid1 != -1 && j == mid1 + i - n) || (mid2 != -1 && j == mid2 - i + n)){
                cout << "*";
            }
            else cout << " ";

        }
        cout << endl;
    }
}