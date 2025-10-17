#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2;
    cin >> n1 >> n2;
    double final = n1 + n2;

    cout << fixed << setprecision(1);
    cout << "NOTA FINAL = " << final << endl;

    if (final < 60.0)
        cout << "REPROVADO" << endl;

    return 0;
}