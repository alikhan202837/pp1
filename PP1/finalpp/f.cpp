#include <iostream>
#include <algorithm>
using namespace std;
int fun(string a, string b){
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int res = stoi(a) + stoi(b);
    string res_s = to_string(res);
    reverse(res_s.begin(), res_s.end());
    return stoi(res_s);

}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        string a, b;
        cin >> a >> b;
        arr[i] = fun(a, b);
    }
    for(int i = 0;i<n;i++){
        cout << arr[i] << endl;
    }
}