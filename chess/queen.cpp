#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0; i <=8;i++){
        for(int j = 0; j <= 8;j++){
            if(i == 0 || j == 0) cout << i + j << " ";
            else if(i == n && j == m) cout << "0 ";
            else if(i == n || j == m || i-n==j-m || i-n==m-j) cout << "+ ";
            else cout << "  ";
        }
        cout << endl;
    }
}


    
