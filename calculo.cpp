#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double L, C, f;

    cout << "Ingrese la inductancia (en Henrios): ";
    cin >> L;
    cout << "Ingrese la capacitancia (en Faradios): ";
    cin >> C;

    if (L <= 0 || C <= 0) {
        cout << "La inductancia y la capacitancia deben ser mayores a cero." << endl;
        return 1; 
    }

    f = 1 / (2 * M_PI * sqrt(L * C));

    cout << "La frecuencia de resonancia es: " << f << " Hz" << endl;

    return 0;
}
