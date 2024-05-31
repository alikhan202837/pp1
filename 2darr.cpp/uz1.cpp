#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        for(int j = n - 1; j >= 0;j--){
            if(i < j) cout << ".";
            else cout << "*";
        }
        for(int k = 0; k < n - 1; k++){
            if(i <= k) cout << ".";
            else cout << "*";
        }
        cout << endl;
    }
}
/*
..*..        02 01 00    00 01
.***.        12 11 10    10 11
*****        22 21 20    20 21

*/