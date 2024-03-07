#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Nhap mot so nguyen duong n: "; cin >> n;

    for (int i = 1; i < n; ++i)
        if (n % i == 0) sum += i;

    cout << (sum == n ? "La so hoan hao." : "Khong phai so hoan hao.") << endl;
    return 0;
}

