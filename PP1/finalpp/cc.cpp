#include <iostream>
#include <algorithm>
using namespace std;
int fun(int a){
    int sum = 0;
    while(a > 0){
        int lastdig = a%10;
        sum += lastdig;
        a/=10;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    for(int i = 100;i<1000;i++){
       if(fun(i) == n) cout << i << endl;
    }   
}