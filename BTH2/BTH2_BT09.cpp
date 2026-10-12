#include <iostream>
using namespace std;

int main() {
    int n, k=0 , l = 0 , m=1;
    cout << "Nhap so nguyen duong n: "; 
    cin >> n; 
    //yc 1 
    for (int i = 1; i <= n; i++) {
        k = k + i; 
    } cout << k<<endl; 
    // yc 2 tong cac so chan tu 1 den n 
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 || i==1) {
            l += i;
        }
    }
    cout << l<<endl;
    //yc 3 giai thua 
    for (int i = 1 ; i<=n ; i++) {
        m *= i; 
    }
    cout << m; 

    return 0;
}