#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    string comp1 = s, comp2 = t;
    sort(comp1.begin(), comp1.end());
    sort(comp2.begin(), comp2.end());
    int cnt = 0;
    //abcde
    //01234
    //deabc
    if(comp1 == comp2){
        while(s != t){
            char temp = s[0];
            s[0] = s[s.size() - 1];
            for(int i = 1;i<s.size();i++){
                char temp2 = s[i];
                s[i] = temp;
                temp = temp2;
            }
            cnt++; 
            if(cnt > s.size()){
                cout << "NOOO";
                return 0;
            }
        }
        cout << cnt;
    }
    else{
        cout << "NOOO";
    }

}

