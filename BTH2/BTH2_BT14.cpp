#include <iostream>
using namespace std;

int main() {
    int kwh; 
    long long tong = 0;
    do {
        cout << "Nhap so kWh tieu thu trong thang: ";
        cin >> kwh;
        if (kwh < 0) cout << "Dinh dang nhap sai | Nhap lai !\n";
    } while (kwh < 0);
    if (kwh <= 50) {
        tong = kwh * 1984;
    }
    else if (kwh <= 100) {
        tong = (50 * 1984) + ((kwh - 50) * 2050);
    }
    else if (kwh <= 200) {
        tong = (50 * 1984) + (50 * 2050) + ((kwh - 100) * 2380);
    }
    else if (kwh <= 300) {
        tong = (50 * 1984) + (50 * 2050) + (100 * 2380) + ((kwh - 200) * 2998);
    }
    else if (kwh <= 400) {
        tong = (50 * 1984) + (50 * 2050) + (100 * 2380) + (100 * 2998) + ((kwh - 300) * 3350);
    }
    else {
        tong = (50 * 1984) + (50 * 2050) + (100 * 2380) + (100 * 2998) + (100 * 3350) + ((kwh - 400) * 3460);
    }

    cout << "Tien dien: " << tong << endl;
    cout << "VAT (8%): " << tong * 0.08 << endl;
    cout << "Tong cong: " << tong * 1.08 << endl;

    return 0;
}
