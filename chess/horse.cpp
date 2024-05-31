#include <iostream>
using namespace std;
int main(){
    int col, row, c, r;
    cin >> col >> row >> c >> r;
    if((col - 2 == c && row - 1 == r) || (col - 2 == c && row + 1 == r)) cout << "YES";
    else if((col + 1 == c && row - 2 == r) || (col - 1 == c && row - 2 == r)) cout << "YES";
    else if((col + 2 == c && row - 1 == r) || (col + 2 == c && row + 1 == r)) cout << "YES";
    else if((col - 1 == c && row + 2 == r) || (col - 1 == c && row - 2 == r)) cout << "YES";
    else cout << "NO";
}