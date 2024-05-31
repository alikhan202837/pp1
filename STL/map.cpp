#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    // Map - key/value container

    /*
    
    m
    K  V
    [a][10] - pair
    [b][12]
    [d][2]
    [c][6]
    [][]
    */

    map<char, int> m;
    m['d'] = 2;
    m['a'] = 10;
    m['b'] = 3;
    m['c'] = 2;
    m['b'] = 12;

    // m.clear(); clear map
    // cout << m.empty() << endl;

    cout << m.size() << endl; // 4
    map<char, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;



    map<char, int> m;
    m['d'] = 2;
    m['a'] = 10;
    m['b'] = 3;
    m['c'] = 2;
    m['b'] = 12;
    m.insert(pair<char, int>('f', 1));
    
    pair<char, int> p('g', 100);
    m.insert(p);


    cout << m.size() << endl;
    map<char, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }





    map<string, int> m;
    m["23B010"] = 3;
    m["23B011"] = 10;
    m["23B012"] = 2;
    m["23B013"] = 15;
    m["23B014"] = 7;

    map<string, int>::iterator it = m.begin();
    pair<string, int> winner(it->first, it->second);
    while(it != m.end()) {
        if(it->second > winner.second) {
            winner.first = it->first;
            winner.second = it->second;
        }
        it++;
    }

    cout << winner.first << " " << winner.second << endl;
}