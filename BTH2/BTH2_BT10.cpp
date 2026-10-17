#include <iostream>
using namespace std;

int main() {
    int n, s = 0, i = 0;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    int k = n;
    while (k > 0) // sai -> end | dung -> continue
    {
        s = s + (k % 10);
        k /= 10;
        i++;
    }
    cout << "Tong to la : " << i << endl;
    cout << "Tong cac chu so : " << s;
    return 0;
}