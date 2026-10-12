#include <iostream>
using namespace std;

int main() {
    int n , k ; 
    cout << "Nhap so nguyen n (1-9): "; 
    cin >> n; 
    do {
        for (int i = 1; i <= 10; i++) {
            cout << n << " x " << i << "=" << n * i  << endl;
        }
    } while (n >9 || n < 0) ;
    return 0; 
}