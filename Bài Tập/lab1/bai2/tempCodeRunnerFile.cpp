#include <iostream>
using namespace std;

// Hàm f1 như bạn đã viết
int f1(int x) {
    if (x > 10)
        return 2 * x;
    else if (x > 0)
        return -x;
    else
        return 2 * x;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    int result = f1(n);
    cout << "Ket qua f1(" << n << ") = " << result << endl;

    return 0;
}