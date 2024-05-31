#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(i == j) cout << "* ";
            else if(j > i) cout << ". ";
        }
        cout << endl;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j<n;j++){
            if(i == j) cout << "*";
            else if(i > j) cout << ". ";
        }
        cout << endl;
    }
}

/*
5
....*   04 03 02 01 00
...*    14 13 12 11
..*     24 23 22 
.*      34 33
*       44

*       00
.*      10 11
..*     20 21 22
...*    30 31 32 33

*/