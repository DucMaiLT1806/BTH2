#include <iostream>
using namespace std;



void c2(int a , int b , int c ) {
    int temp; 
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
}
int main() {
    int a, b, c; 
    cout << "Nhap a , b , c: "; 
    cin >> a >> b >> c; 
    if (a <= b && a <= c) {
        if (b <= c) cout << a << b << c;
        else cout << a << c << b; 
    }
    if (b <= a && b <= c) {
        if (a <= c) cout << b << a << c;
        else cout << b << c << a;
    }
    if (c <= a && c <= b) {
        if (a <= b) cout << c << a << b;
        else cout << c << b << a; 
    }




    return 0;
}