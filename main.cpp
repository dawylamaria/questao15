#include <iostream>
#include <cmath>

using namespace std;
int main() {
    const double COBERTURA_LITRO = 3.0;
    const double TAMANHO_LATA = 18.0;
    const double PRECO_LATA = 80.0;
    double quantidadeLitros;
    double quantidadeLatas;
    double precoTotal;

    double area;
    cout << "Digite o tamanho da area a ser pintada em metros quadrados: ";
    cin >> area;

    quantidadeLitros = (area / COBERTURA_LITRO);
    quantidadeLatas = static_cast<int>(ceil(quantidadeLitros / TAMANHO_LATA));

    precoTotal = (quantidadeLatas * PRECO_LATA);

    cout << "Quantidades de latas de tinta necessarias: " << quantidadeLatas << std::endl;
    cout << "Preço total: " << precoTotal << endl;
    
    system("pause");
    return 0;
}
