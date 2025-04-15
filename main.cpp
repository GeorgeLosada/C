#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


const int TAM = 20;

int mostrarMatriz(int matriz[TAM][TAM], string nombre) {
    cout << "+=======================================================+" << endl;
    cout << "|          " << nombre << "                    |" << endl;
    cout << "+=======================================================+" << endl;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] < 10) {
                cout << "| " << matriz[i][j] << " ";
            } else if (matriz[i][j] < 100) {
                cout << "| " << matriz[i][j] << " ";
            } else {
                cout << "| " << matriz[i][j] << " ";
            }
        }
         cout << "|" << endl;
    }

    cout << "+======================================================================================================================+" << endl;
    return 0;
}

int inicializarMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 101 + 100;
        }
    }
    return 0;
}

int productoPorEscalar(int matriz[TAM][TAM], int escalar) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] *= escalar;
        }
    }
    return 0;
}

int sumaMatrices(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    return 0;
}

int restaMatrices(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
    return 0;
}

int multiplicacionElemento(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
    return 0;
}

int sumaDiagonal(int matriz[TAM][TAM]) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += matriz[i][i];
    }
    return suma;
}

int menorValor(int matriz[TAM][TAM]) {
    int menor = matriz[0][0];
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

int mayorValor(int matriz[TAM][TAM]) {
    int mayor = matriz[0][0];
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
        }
    }
    return mayor;
}

int sumaTotal(int matriz[TAM][TAM]) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            suma += matriz[i][j];
        }
    }
    return suma;
}

int promedioMatriz(int matriz[TAM][TAM]) {
    int suma = sumaTotal(matriz);
    return suma / (TAM * TAM);
}

int multiplicacionMatricial(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < TAM; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    return 0;
}

int main() {

    cout << "+===========================================================+\n";
    cout << "|                  PROYECTO FINAL - PROGRAMACION            |\n";
    cout << "+===========================================================+\n";
    cout << "| Nombre Completo : George Losada Salazar                   |\n";
    cout << "| Usuario edX     : GeorgeLosada                            |\n";
    cout << "| Correo Electr�nico: gelosada@unal.edu.co                  |\n";
    cout << "+===========================================================+\n";
    cout << "|               �Bienvenido!                                |\n";
    cout << "| Este es el programa numero uno de la programacion         |\n"; //referencia xdd
    cout << "|                                                           |\n";
    cout << "| Presione Enter para continuar...                          |\n";
    cout << "+===========================================================+\n";
    cin.ignore();


    srand(time(0));
    int A[TAM][TAM], B[TAM][TAM], resultado[TAM][TAM];
    inicializarMatriz(A);
    inicializarMatriz(B);
    int opcion;
    do {
        cout << "+===========================================================+" << endl;
        cout << "|        PROYECTO FINAL - PROGRAMACION                      |" << endl;
        cout << "+===========================================================+" << endl;
        cout << "|                       MENU DEL PROGRAMA                   |" << endl;
        cout << "+===========================================================+" << endl;
        cout << "| 1. Producto por escalar                                   |" << endl;
        cout << "| 2. Suma de matrices                                       |" << endl;
        cout << "| 3. Resta de matrices                                      |" << endl;
        cout << "| 4. Multiplicacion elemento a elemento                     |" << endl;
        cout << "| 5. Suma diagonal                                          |" << endl;
        cout << "| 6. Menor valor de matriz A                                |" << endl;
        cout << "| 7. Mayor valor de matriz A                                |" << endl;
        cout << "| 8. Suma total de matriz A                                 |" << endl;
        cout << "| 9. Promedio de matriz A                                   |" << endl;
        cout << "| 10. Salir                                                 |" << endl;
        cout << "| 11. Ver matrices                                          |" << endl;
        cout << "| 12. Multiplicacion matricial                              |" << endl;
        cout << "+===========================================================+" << endl;
        cout << "Ingrese una opcion: ";

        if (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "+=================================================+" << endl;
            cout << "| Entrada no valida, por favor ingrese un numero. |" << endl;
            cout << "+=================================================+" << endl;
            continue;
        }

        switch(opcion) {
            case 1: {
                int escalar;
                cout << "Ingrese el escalar (no puede ser 0): ";
                cin >> escalar;
                if (escalar == 0) {
                    cout << "Error: El escalar no puede ser 0.\n";
                } else {
                    productoPorEscalar(A, escalar);
                }
                break;
            }
            case 2: {
                sumaMatrices(A, B, resultado);
                cout << "Suma de matrices completada.\n";
                mostrarMatriz(resultado, "Suma de A + B");
                break;
            }
            case 3: {
                restaMatrices(A, B, resultado);
                cout << "Resta de matrices completada.\n";
                mostrarMatriz(resultado, "Resta de A - B");
                break;
            }
            case 4: {
                multiplicacionElemento(A, B, resultado);
                cout << "Multiplicacion elemento a elemento completada.\n";
                mostrarMatriz(resultado, "Multiplicacion elemento a elemento A * B");
                break;
            }
            case 5: {
                int suma = sumaDiagonal(A);
                cout << "+===========================================+" << endl;
                cout << "| Suma de la diagonal de A: " << suma << "                   |" << endl;
                cout << "+===========================================+" << endl;
                break;
            }
            case 6: {
                int menor = menorValor(A);
                cout << "+===========================================+" << endl;
                cout << "| Menor valor en A: " << menor << "                         |" << endl;
                cout << "+===========================================+" << endl;
                break;
            }
            case 7: {
                int mayor = mayorValor(A);
                cout << "+===========================================+" << endl;
                cout << "| Mayor valor en A: " << mayor << "                         |" << endl;
                cout << "+===========================================+" << endl;
                break;
            }
            case 8: {
                int suma = sumaTotal(A);
                cout << "+===========================================+" << endl;
                cout << "| Suma total de A: " << suma << "                         |" << endl;
                cout << "+===========================================+" << endl;
                break;
            }
            case 9: {
                int promedio = promedioMatriz(A);
                cout << "+===========================================+" << endl;
                cout << "| Promedio de A: " << promedio << "                          |" << endl;
                cout << "+===========================================+" << endl;
                break;
            }
            case 10:
                cout << "Saliendo del programa...\n";
                break;
            case 11:
                mostrarMatriz(A, "Matriz A");
                mostrarMatriz(B, "Matriz B");
                break;
            case 12: {
                multiplicacionMatricial(A, B, resultado);
                cout << "Multiplicaci�n matricial de A * B completada.\n";
                mostrarMatriz(resultado, "Multiplicaci�n Matricial A * B");
                break;
            }
            default:
                cout << "+===========================================================+" << endl;
                cout << "| Opcion invalida, por favor ingrese una opcion valida.     |" << endl;
                cout << "+===========================================================+" << endl;
        }
    } while(opcion != 10);

    return 0;
}
