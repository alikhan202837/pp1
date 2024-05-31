#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0;i<n;i++){
        int a, b;
        cin >> a >> b;
        pair<int, int> p(a, b);
        v.push_back(p);
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}