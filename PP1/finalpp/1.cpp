#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a, a+n);
    int cnt = 0;
    int b[10000] = {0};
    for(int i = 0;i<n;i++){
        b[a[i]]++;
    }
    for(int i = 0;i<10000;i++){
        if(i >= a[0] && i <= a[n - 1] && b[i] == 0) cnt++;
    }
    cout << cnt;
}