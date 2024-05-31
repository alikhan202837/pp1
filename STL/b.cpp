#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> m;
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        m[a]++;
    }
    m.erase(m.begin());
    cout << m.begin()->first << " " << m.begin()->second;
}