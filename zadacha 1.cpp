#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    // Введення значень A, B і C
    cout << "Enter value A: ";
    cin >> A;
    cout << "Enter value B: ";
    cin >> B;
    cout << "Enter value C: ";
    cin >> C;

    // Обмін значень
    int temp = A;
    A = B;
    B = C;
    C = temp;

    // Виведення нових значень
    cout << "New value A: " << A << endl;
    cout << "New value  B: " << B << endl;
    cout << "New value  C: " << C << endl;

    return 0;
}
