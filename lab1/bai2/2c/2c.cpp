#include <iostream>
using namespace std;

// Hàm f2
int f2(int x) {
    if (x < 10)
        return 2 * x;
    else if (x < 2)
        return -x;
    else
        return 2 * x;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    int result = f2(n);
    cout << "Ket qua f2(" << n << ") = " << result << endl;

    return 0;
}
