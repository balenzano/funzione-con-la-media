#include <iostream>

double CalcolaMedia(double x, double y) {
    return (x + y) / 2;
}

int main() {
    double x, y;

    std::cout << "Inserisci i due numeri: ";
    std::cin >> x >> y;

    double media = CalcolaMedia(x, y);
    std::cout << "La media dei due numeri e:" << media << std::endl;

    return 0;
}