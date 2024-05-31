#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, string> m;
    vector <pair<string, string>> v;
    for(int i = 0;i<n;i++){
        string s, h;
        cin >> s >> h;
        v.emplace_back(s, h);
    }

    for(int i = 0;i<v.size();i++){
        bool flag = false;
        for(int j = i + 1;j<v.size();j++){
            if(v[i].second == v[j].first){
                m[v[i].first] = v[j].second;
                flag = true;
                v.erase(v.begin() + j);
            }
        }
        if(!flag){
            m[v[i].first] = v[i].second;
        }
    }
    cout << m.size() << endl;
    map<string, string>::iterator it;
    for(it = m.begin();it!=m.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}

