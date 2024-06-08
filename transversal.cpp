#include <iostream>
using namespace std;
int main() 
{
    cout <<"****Proyecto Transversal******\n";

    int lar;
    cout << "Introduce el largo del array: ";
    cin >> lar;
    while (lar < 2 || lar > 20) {
          cout<<"El numero ingresado no esta dentro del rango de 2-20.";
          cout<<"Introduce el largo del array: ";
          cin >> lar;
    }

    int numeros[lar];
    for (int i = 0; i < lar; i++) {
        int numerin;
        cout << "Da el numero para la posicion " << i << ": ";
        cin >> numerin;
        for (int a = 0; a < i; a++) {
            while (numerin == numeros[a]) {
                cout << "El numero que ingresaste ya fue introducido anteriormente. Por favor ingresa otro numero: ";
                cin >> numerin;
                a = 0; 
            }
        }
        numeros[i] = numerin;
    }

    cout << "\nEl arreglo original es: ";
    for (int i = 0; i < lar; i++) {
        cout << numeros[i] << " ";
    }
    cout << "\n";

    int res;
    do {
        cout << "\nIngresa el metodo con el que quieres ordenar tu arreglo:\n";
        cout << "1. Seleccion\n";
        cout << "2. Burbuja\n";
        cout << "3. Insercion\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> res;

        switch (res) {
            case 1:
                cout << "\n Iniciando ordenamiento de seleccion. \n";
                for (int i = 0; i < lar; i++) {
                    int min = i;
                    for (int f = i + 1; f < lar; f++) {
                        if (numeros[f] < numeros[min]) {
                            min = f;
                        }
                    }
                    int aux = numeros[i];
                    numeros[i] = numeros[min];
                    numeros[min] = aux;

                    cout << "\nVuelta no. " << (i + 1) << ": ";
                    for (int cha = 0; cha < lar; cha++) {
                        cout << numeros[cha] << " ";
                    }
                }
                cout << "\nEl array ordenado: ";
                for (int i = 0; i < lar; i++) {
                    cout << numeros[i] << " ";
                }
                break;

            case 2:
                cout << "\n Iniciando ordenamiento de burbuja. \n";
                for (int i = 0; i < lar; i++) {
                    for (int j = i + 1; j < lar; j++) {
                        if (numeros[i] > numeros[j]) {
                            int aux = numeros[i];
                            numeros[i] = numeros[j];
                            numeros[j] = aux;
                        }
                    }
                    cout<< "Vuelta no. " << (i + 1) << ": ";
                    for (int l = 0; l < lar; l++) {
                        cout << numeros[l] << " ";
                    }
                    cout << "\n";
                }
                cout << "\nEl array ordenado: ";
                for (int i = 0; i < lar; i++) {
                    cout << numeros[i] << " ";
                }
                break;

            case 3:
                cout << "\n Iniciando ordenamiento de insercion. ?\n";
                for (int ma = 0; ma < lar; ma++) {
                    int sa = ma;
                    for (int ha = ma + 1; ha < lar; ha++) {
                        if (numeros[ha] < numeros[sa]) {
                            sa = ha;
                        }
                    }
                    int aux = numeros[ma];
                    numeros[ma] = numeros[sa];
                    numeros[sa] = aux;

                    cout << "Vueltas no." << (ma + 1) << ": ";
                    for (int y = 0; y < lar; y++) {
                        cout << numeros[y] << " ";
                    }
                    cout << "\n";
                }
                cout << "\nEl array ordenado: ";
                for (int ma = 0; ma < lar; ma++) {
                    cout << numeros[ma] << " ";
                }
                break;

            case 4:
                cout << "\nGracias por usar el programa.\n";
                break;

            default:
                cout << "\nEl numero ingresado no esta disponible en el rango de las opciones.\n";
                break;
        }
    } while (res != 4);

    return 0;