#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    vector <int> v(7);
    for(int i = 0;i<7;i++) cin >> v[i];

    int n;
    cin >> n;
    int b[n];
    for(int i = 0;i<n;i++) cin >> b[i];

    map<int, int> m;
    m[1] = v[0] * 1;
    m[2] = v[1] * 2;
    m[5] = v[2] * 5;
    m[10] = v[3] * 10;
    m[20] = v[4] * 20;
    m[50] = v[5] * 50;
    m[100] = v[6] * 100;
    map<int, int>::iterator it;
    int sum = 0;
    for(it = m.begin(); it!=m.end(); it++){
        sum += it->second;
    }
    cout << endl << endl;
    cout << sum << endl << endl;
    for(int i = 0;i<n;i++){
        if(b[i] <= sum){
            sum -= b[i];
            cout << "transaction" << endl;
        }
        else if(b[i] > sum){
            cout << "no" << endl;
        }
    }


    
}