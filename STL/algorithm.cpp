#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int i = 0;
void show(int a){
    cout << a << " ";
}
int gen(){
    return ++i;
}
int main(){
    // Built in functions in <algorithm> lib
    // fill, for_each

    vector<int> v(5);
    fill(v.begin(), v.end(), 3);
    for_each(v.begin(), v.end(), show);

    cout << endl; 


    vector<int> vv(8);
    generate(vv.begin(), vv.end(), gen);
    for_each(vv.begin(), vv.end(), show);
    return 0;
}