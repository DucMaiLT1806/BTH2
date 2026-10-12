#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Nhap 1 so nguyen tu 1 den 7:";
    cin >> n; 
    
    if (n < 8 || n>1) {
        switch (n) {
        case 1: cout << "Thu 2";
        case 2: cout << "Thu 3";
        case 3: cout << "Thu 4";
        case 4: cout << "Thu 5";
        case 5: cout << "Thu 6";
        case 6: cout << "Thu 7";
        case 7: cout << "Chu nhat";
        }
    }
    else cout << "Khong hop le"; 
    return 0;
}