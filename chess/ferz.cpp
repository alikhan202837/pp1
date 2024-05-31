#include <iostream>
using namespace std;
int main(){
    int col,row,c,r;
    cin >> col >> row >> c >> r;
    // 11 22
    if(col == c || row == r){
        cout << "YES";
    } // vertical
    
    
    else if(col+row == c + r){
        cout << "YES";
    }
    else if(col-row == c - r){
        cout << "YES";
    }
    else cout << "NO";
}