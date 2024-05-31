#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, st, en;
    cin >> n >> st >> en;
    vector <int> v;
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int start = st - 1, end = en - 1;

    reverse(v.begin() + start, v.end() - (v.size() - end - 1));
    
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
}   