#include <iostream>
using namespace std;

int main() {
    int t, x; 
    cout << "Nhap tuoi cua ban:";
    cin >> t; 
    if (t < 0) return 0;
    if (t >= 18) {
        cout << "Ban da du tuoi thi bang lai xe may";
    }
    else {
        x = 18 - t; 
        cout << "Ban con " << x << " nam nua moi du tuoi";
    }
    return 0;
}