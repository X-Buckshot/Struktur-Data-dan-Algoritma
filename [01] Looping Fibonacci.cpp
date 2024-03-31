#include <iostream>
using namespace std;




void fibonacci(int n) {
    int a = 0, b = 1;
    cout << "Deret Fibonacci hingga suku ke-" << n << ":" << endl;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; ++i) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}


int main() {
    int n;
    cout << "Masukkan jumlah suku Fibonacci yang ingin ditampilkan: ";
    cin >> n;
    
    fibonacci(n);
    
    return 0;
}
