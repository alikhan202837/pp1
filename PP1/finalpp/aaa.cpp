#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++) cin >> a[i];
    int m;
    cin >> m;
    int b[m];
    for(int i = 0;i<m;i++) cin >> b[i];

    int c[m];
    for(int i = 0;i<m;i++){
        int cnt = 0;
        for(int j = 0;j<n;j++){
            if(b[i] == a[j]) cnt++;
        }
        c[i] = cnt;
    }

    for(int i = 0;i<m;i++){
        cout << c[i] << endl;
    }
}