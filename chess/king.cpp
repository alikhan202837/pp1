#include <iostream>
using namespace std;
int main() {
    int col, row, cx, ry;
    cin >> col >> row >> cx >> ry;
    if((row == ry && col == cx-1) || (row == ry && col == cx+1) || (row == ry-1 && col == cx) || (row == ry + 1 && col == cx) || (col == cx+1 && row == ry+1) || (col == cx-1 && row == ry-1) || (col == cx-1 && row == ry+1) || (col == cx+1 && row == ry-1)) cout << "YES";
    else cout << "NO";
  return 0;
}