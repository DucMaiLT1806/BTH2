#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; 
    double  s1 = 0, s2=0, s3=0; 
    cout << "Nhap so nguyen n :";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        s1 = s1 + (1.0 / i);
    }
    for (int i = 1; i <= n; i++) {
        s2 += (i * i); 
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) s3 -= (1.0 / i);
        else s3 += (1.0 / i); 
    }
    cout << s1<<endl<<s2<<endl<<s3<<endl; 
    return 0;
}