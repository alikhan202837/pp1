#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    string a[n];
    for(int i = 0;i<n;i++) cin >> a[i];


    char arr[8][8];
    for(int i = 0;i<8;i++){
        for(int j = 0; j<8;j++){
            arr[i][j] = '0';
        }
    }

    for(int k = 0;k<n;k++){
        for(char i = 'A'; i<='H'; i++){
            for(char j = '1'; j<='8';j++){
                if(a[k][0] == i && a[k][1] == j) arr[((int) i) - 65][((int) j) - 49] = '*';
            }
        }
    }
    for(int i = 0;i<8;i++){
        for(int j = 0; j<8;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}