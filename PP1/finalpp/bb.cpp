#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    // int arr[9] = {0};
    // while(cin >> n){
    //     if(n == 0) break;

    //     for(int i = 0; i < 9;i++){
    //         if(n == i + 1){
    //             arr[i]++;
    //             break;
    //         }
    //     }
    // }
    // for(int i = 0;i<9;i++){
    //     cout << arr[i] << " ";
    // }


    
    map<int, int> m;

    for(int i = 1;i<=9;i++){
        m[i] = 0;
    }

    while(cin >> n){
        if(n == 0) break;
        m[n]++;
    }

    map<int,int>::iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        cout << it->second << " ";
    }

}