#include <iostream>
using namespace std;

int main() {
    double km  , Tongtien = 0 ; 
    cout << "Nhap so km: ";
    cin >> km; 
    if (km <= 0) Tongtien = 0;
    else if (km <= 1) Tongtien = 12;
    else if (km <= 30) Tongtien = 12 * (km - 1) * 14.5;
    else  Tongtien = 12 + (29 * 14.5) + (km - 30) * 11.6;
    cout << "so tien phai tra: " << Tongtien *1000 << "VND";
    
    return 0;
}