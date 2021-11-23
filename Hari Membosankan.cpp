#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int j, m, d, p, q, n;   
    
    cin >> n;
    
    j = n/3600;
    p = n%3600;
    m = p/60;
    q = p%60;
    d = q%60;
    
    cout << j << " jam " << m << " menit "<< d << " detik";
}
