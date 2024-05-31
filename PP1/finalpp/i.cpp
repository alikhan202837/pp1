#include <iostream>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    if(a.find(b) == string::npos && b.find(a) == string::npos){
        cout << a+b;
    }
    if(a.find(b) != string::npos){
        cout << a;
    }
    if(b.find(a) != string::npos){
        cout << b;
    }
}