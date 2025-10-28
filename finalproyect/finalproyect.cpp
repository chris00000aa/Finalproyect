#include <iostream>
/*los requerimientos de nuestro proyecto, hasta el momento son los siguientes
1.Un menu con 4 o mas opciones todas personalizables para el usuario
1.1 Tabla de multiplicar
1.2 Secuencia de fibonacci
1.3 Numeros primos
1.4 Figura geometrica
(le podemos agregar estrellas en este punto o cualquier otra figura seria buena idea, numeros de pi 3.141592)
PICOS PERSONALIZADOS PARA UNA ESTRELLA, NIVEL MASTER!!!!
2.Ponerle limites a el usuario !=0 <100
3.Que se repita el programa hasta que el usuario desee salir
4.Codigo ordenado en funciones
5.Un sonido o cancion depende de la opcion que elija
6.Que abra la terminal(esto es para java)
7.Que tenga colores atractivos
                                    TODO DEBE SER PERSONALIZADO PARA EL USUARIO
 */
using namespace std;
void multiplicarTablas() {
    int numbers, newtabla, tabla;
    cout << "Cuantos numeros desea multiplicar" << endl;
    cin >> numbers;
    cout << "De que tabla" << endl;
    cin >> tabla;
    for (int x = 1; x <= numbers; x++) {
        newtabla = tabla * x;// se va guardando la multiplicacion
        cout << tabla << "*" << x << "=" << newtabla << endl;
    }
}
void FibonacciCuenta() {

    //Calcular numeros de fibonacci y mostrarlos todos los que pida el usuario

}
void comprobarSiEsPrimo() {//haciendo una o dos operaciones en las que comprobemos si un numero es primo o no.


}
void figura() {
    int altura;
    cout << "De que tamaño deseas tu figura" << endl;
    cin >> altura;
    for (int i = 2; i <= altura; i++) {
        cout << " " << endl;
        for (int a = 2; a <= i; a++) {
            cout << endl;
            for (int x = 2; x <= a; x++) {
                cout << " *";
            }
        }
    }

}
int main()
{
    int option;
    float  otion;//para evitar errores con decimales
    cout << "     MENU     " << endl;
    cout << "1.Tablas de multiplicar" << endl;
    cout << "2.Secuencia de FIBONACCI" << endl;
    cout << "3.Numeros primos" << endl;
    cout << "4.Figura geometrica" << endl;
    cout << "5.Estrellas personalizadas (In process...)" << endl;
    cin >> option;
    switch (option) {
    case 1:
        //funcion tablas de multiplicar
        multiplicarTablas();
        break;
    case 2:
        FibonacciCuenta();
        break;
    case 3:
        comprobarSiEsPrimo();
        break;
    case 4:
        figura();
        break;
    case 5:
        break;



    }


    return 0;
}
