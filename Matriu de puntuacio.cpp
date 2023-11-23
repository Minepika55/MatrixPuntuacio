#include <iostream>
#include <vector>
using namespace std;

int main() {
    int fila;//Faig el int per la fila.
    int columna;//Faig el int per la columna.
    cout << "Entra el numero de files i columnes: ";//Demano les files i columnes a l'usuari.
    cin >> fila >> columna;

    vector < vector < int >> matrix(fila, vector < int >(columna));//Creo la matriu amb les files i columnes.

    cout << "Entra la matriu:" << endl;//Li demano a l'usuari els numeros que vol a la matriu.
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < columna; ++j) {
            cin >> matrix[i][j];
        }
    }

    int max = matrix[0][0];//Inicialitzo el maxim de la metriu.
    int min = matrix[0][0];//Inicialitzo el minim de la metriu.

    for (int i = 0; i < fila; ++i) {//Llegim la matriu sencera per poder trobar el numero maxim i minim.
        for (int j = 0; j < columna; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    cout << "El numero mes alt es: " << max << " El numero mes baix es: " << min << endl;//Mostro els numeros maxims i minims a l'usuari.

    return 0;
}