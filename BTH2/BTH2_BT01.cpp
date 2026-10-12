#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n; 
    if (n % 2 == 0) {
        cout << "n la so chan " << endl; 
    }
    else cout << "n la so le "<<endl;
    if (n > 0) {
        cout << "n la so duong";
    }
    else if (n == 0) {
        cout << "n la so 0";
    }
    else cout << "n la so am"; 
    return 0;
}