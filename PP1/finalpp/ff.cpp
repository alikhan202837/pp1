#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    string h = "";
    int i = 0;
    int found = s.find("@");
    while(s[i] != '@'){
        h+=s[i];
        i++;
    }
    string address = "";
    for(int j = i; j<s.size();j++){
        address+=s[j];
    }

    string k = "";
    for(int j = i + 1; j < s.size(); j++){
        if(s[j] == '.') break;
        if(s[j] >= 97 && s[j] <= 122){
            k+=s[j];
        }
        i++;
    }
    string b = "";
    for(int j = i + 1; j < s.size(); j++){
        if(s[j] >= 97 && s[j] <= 122){
            b+=s[j];
        }
    }
    cout << address << endl << '@' + k + '.' + b << endl;
    if(address == '@' + k + '.' + b) cout << "yes";
    else cout << "no";

}