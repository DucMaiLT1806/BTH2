#include <iostream>
using namespace std;

int main() {
    double qt, gk, ck , tk; 
    cout << "Nhap diem qua trinh , giua ki , cuoi ki:"; 
    cin >> qt>>gk>>ck; 
    tk = 0.2 * qt + 0.3 * gk + 0.5 * ck; 
    if (tk >= 8.5)cout << "A";
    else if (tk > 7.0)cout << "B";
    else if (tk > 5.5)cout << "C";
    else if (tk > 4.0) cout << "D";
    else cout << "F";

    return 0;
}