#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int qtd;
    cin >> preco >> qtd >> dinheiro;

    double total = preco * qtd;

    cout << fixed << setprecision(2);
    if (dinheiro >= total) {
        double troco = dinheiro - total;
        cout << "TROCO = " << troco << endl;
    } else {
        double faltam = total - dinheiro;
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << faltam << " REAIS" << endl;
    }
    return 0;
}
