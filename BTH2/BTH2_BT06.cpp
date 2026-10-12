#include <iostream>
using namespace std;

int main() {
    int a, b; 
    cout << "Nhap a , b : ";
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "Pt vo so nghiem";
        }
        else cout << "Phuong trinh vo nghiem ";
    }
    else cout << "Phuong trinh co nghiem:" << -b / a; 
    return 0;
}