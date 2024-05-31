// container 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    cout << "SORTING\n";
    vector <int> v = {1, 2, 4, 3, 1};
    sort(v.begin(), v.end());
    cout << "After sort\n";
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }



    cout << endl << "ERASE\n";
    cout << "ERASE AT PLACE\n";
    v.erase(v.begin() + 2);
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }


    vector <int> vv = {1,2,3,4,5};
    cout << endl << "ERASE IN RANGE:\n" << "cin value: ";
    int s,e;
    cin >> s >> e;
    vv.erase(vv.begin() + s, vv.end() - (vv.size() - e  - 1));
    for(int i = 0;i<vv.size();i++){
        cout << vv[i] << " ";
    }

    cout << endl << "INSERT\n";
    vector <int> a = {1,2,3,4,9,10};
    cout << "cin values: ";
    int value, place;
    cin >> value >> place;
    a.insert(a.begin() + place, value);
    for(int i = 0;i<a.size();i++){
        cout << a[i] << " ";
    }


    cout << endl << "CHECK TO EMPTY\n";
    vector <int> b;
    cout << b.empty() << endl; // 1
}