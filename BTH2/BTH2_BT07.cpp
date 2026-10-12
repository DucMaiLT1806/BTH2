#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Nhap so nguyen n: "; 
    cin >> n; 
    //cau a 
    for (int i = 1;i <= n; i++) {
        cout  << i << " ";

    }cout << endl; 
    //cau b
    for (int i = 1;i <= n; i++) {
        if (i % 2 == 0 || i == 1) {
            cout  << i << " ";
        }
    }cout << endl;
    //cau c 
    int k = n;
    while ( n > 1) {
        cout << k << " "; k--;
        if (k == 0) break; 
    }

    return 0;
}