#include <iostream>
#include <cmath>  // Cần để dùng log, cos
using namespace std;

// Hàm f3
int f3(int x) {
    // Lưu ý: log() là logarit tự nhiên
    if (log(x * x * cos(x)) < 3 * x)
        return 2 * x;
    else
        return 2 * x;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    int result = f3(n);
    cout << "Ket qua f3(" << n << ") = " << result << endl;

    return 0;
}
