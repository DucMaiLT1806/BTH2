#include <iostream>
using namespace std;
void hv1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }cout << endl;
    }
}

void hv2(int n ) {
    int i = 0, j = 0; 
    while (i < n) {
        while (j < n) {
            cout << "*"; j++;
        }
        i++; j = 0;cout << endl;
    }
}

void tamgiacv(int n) {
    //int i = 0, j = 0; 
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
}
int main() {
    int n ; 
    cout << "Nhap so nguyen duong n: "; 
    cin >> n; 
    //hv1(n);
    //hv2(n);
    tamgiacv(n);

    return 0;
}