#include <iostream>
using namespace std;

int main() {
    double dtb; 
    cout << "Nhap diem tb: "; 
    cin >> dtb; 
    if (dtb > 0 || dtb < 10) {
        if (dtb >= 8) cout << "Gioi"; 
        else if (dtb > 6.5) { cout << "Kha"; }
        else if (dtb >= 5) { cout << "Trung binh"; }
        else cout << "Yeu";
        
    }
    return 0;
}