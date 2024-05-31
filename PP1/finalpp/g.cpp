#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int a){
    for(int i = 2;i<=sqrt(a);i++){
        if(a % i == 0) return false;
    }
    return true;
}
int main(){
    int n; cin >> n;

    for(int i = 3;i<=n;i++){
        if(isPrime(i) && isPrime(n - i)){
            cout << i << " " << n - i;
            return 0;
        }
    }
}