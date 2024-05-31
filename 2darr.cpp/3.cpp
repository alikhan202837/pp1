#include <iostream>
using namespace std;
int main(){
    /*
    *...   00 01 02 03
     *..      11 12 13
      *.         22 23
       *            33
    
    */
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == j) cout << "* ";
            else if(i < j) cout << ". ";
            else cout << "  ";
        }
        cout << endl;
    }
}