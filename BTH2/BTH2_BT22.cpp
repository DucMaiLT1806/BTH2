#include <iostream>
using namespace std;

int main() {
    int n, max = 0, sdn = 0, tmp;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    tmp = n;
    while (tmp != 0) {
        int d = tmp % 10;
        if (max < d) max = d;
        sdn = sdn * 10 + d;
        tmp /= 10;
    }
    cout << "Chu so lon nhat la: " << max << endl << "So dao nguoc: " << sdn << endl;
    if (sdn == n) cout << "La so doi xung ";
    else cout << "Khong la so doi xung";
    return 0;
}