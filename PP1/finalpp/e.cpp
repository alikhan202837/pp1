#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector <string> v;
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    cin >> m;
    vector <pair<string, string>> vv;
    for(int i = 0;i<m;i++){
        string s, h;
        cin >> s >> h;
        vv.emplace_back(s, h);
    }

    string comp;
    cin >> comp;
    int cnt = 0;
    vector <string> check;
    for(int i = 0;i<vv.size();i++){
        if(vv[i].first == comp){
            cnt++;
            check.push_back(vv[i].second);
        }
        else if(vv[i].second == comp){
            cnt++;
            check.push_back(vv[i].first);
        }
    }
    sort(check.begin(), check.end());
    cout << cnt << endl;
    for(int i = 0;i<check.size();i++){
        cout << check[i] << " ";
    }
}