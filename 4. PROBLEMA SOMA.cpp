#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int qtd;
    cin >> preco >> qtd >> dinheiro;

    double troco = dinheiro - preco * qtd;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;
    return 0;
}