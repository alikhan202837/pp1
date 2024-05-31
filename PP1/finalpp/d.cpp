#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, double> m;
    m["A+"] = 4.00;
    m["A"] = 3.75;
    m["B+"] = 3.50;
    m["B"] = 3.00;
    m["C+"] = 2.50;
    m["C"] = 2.00;
    m["D+"] = 1.50;
    m["D"] = 1.00;
    m["F"] = 0;
    map<double, string> res;
    for(int i = 0;i<n;i++){
        string first, last;
        int k;
        cin >> last >> first >> k;
        double sumup = 0, sumdown = 0;
        for(int j = 0;j<k;j++){
            string point;
            int credit;
            cin >> point >> credit;
            sumup += (m[point] * credit);
            sumdown += credit; 
        }
        double gpa = sumup/sumdown;
        res[gpa] = last + " " + first;
    }
    map<double, string>::iterator it;
    for(it = res.begin(); it != res.end(); it++){
        cout << fixed << setprecision(3) << it->second << " " << it->first << endl;
    }
}