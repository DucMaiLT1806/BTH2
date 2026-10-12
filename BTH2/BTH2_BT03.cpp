#include <iostream>
using namespace std;

int main() {
    int a, b , c ; 
    cout << "nhap 2 so nguyen a , b: ";
    cin >> a >> b; 
    if (a > b) {
        cout << a;
    }
    else if (a == b) {
        cout << "hai so bang nhau";
    }
    else cout << b; 

    // Mo rong them so c va in ra so lon nhat trong ba so 
    cout << "nhap them 1 so c:";
    cin >> c; 
    if (a > b && a > c) {
        cout << a;
    }
    else if (b > a && b > c) {
        cout << b;
    }
    else cout << c; 
    

    return 0;
}