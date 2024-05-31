#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n][k];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<k;j++){
            cin >> a[i][j];
        }
    }
    int arr[n];
    for(int i = 0;i<n;i++){
        int cnt = 0;
        for(int j = 0; j<k;j++){
            if(a[i][j] > 0) cnt++;
        }
        arr[i] = cnt;
    }
    int cnt = 1;
    int max = 0;
    int index = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == arr[i+1] && i!=n) cnt++;
        if(arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    if(cnt == n){
        cout << "Equal";
    }
    else cout << index  + 1;








    // map<int, int> m;
    // set<int> s;
    // for(int i = 0;i<n;i++){
    //     int cnt = 0;
    //     for(int j = 0;j<k;j++){
    //         if(a[i][j] > 0) {
    //             m[i + 1]++;
    //             cnt++;
    //         }
    //     }
    //     s.insert(cnt);
    // }
    
    // if(s.size() <= 1){
    //     cout << "Equal";
    // }
    // else{
    //     cout << m.end()->first;
    // }
}