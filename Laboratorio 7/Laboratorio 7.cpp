// Laboratorio 7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria {
private:
	string titular;
	double saldo;
	bool activa;
	int intentosFallidos;
public:
	CuentaBancaria(string t, double s) {
		titular = t;
		saldo = s;
		activa = true;
		intentosFallidos = 0;
	}

	void depositar(double monto) {
		if (activa) {
			if (monto >= 0) { // no se puede ingresar un valor menor o igual a 0
				saldo += monto;
				cout << "El dinero se a cargado a su cuenta correctamente." << endl;
				cout << "Su saldo actual es de: " << saldo << endl;
			}
			else {
				cout << "El valor de la cantidad a ingresar tiene que ser positivo!" << endl;
			}
		}
		else {
			cout << "Tienes que tener una cuenta activa para poder realizar esta accion." << endl;
		}
	}

	void retirar(double monto) {
		if (saldo > monto) {// no se puede retirar mas dinero que saldo actual
			saldo -= monto;
			cout << "El retiro de: "<< monto <<"Q fue exitoso." << endl;
			cout << "Su saldo actual es de: " << saldo << endl;
			if (saldo <= 100) {
				cout << "Advertencia el saldo de su cuenta es inferior a 100Q" << endl; // advertencia por bajo saldo
			}
		}
		else {
			cout << "La cantidad a retirar debe ser menor al saldo actual de su cuenta." << endl;
		}
	}

	void consultarSaldo() {
		if (activa) {
			cout << "Los datos de su cuenta son: " << endl;
			cout << "Titular: " << titular << endl;
			cout << "Saldo: " << saldo << endl;
			if (saldo <= 100) {
				cout << "Advertencia el saldo de su cuenta es inferior a 100Q" << endl; // advertencia por bajo saldo
			}
		}
		else {
			cout << "La cuenta esta inactiva " << endl;
		}
	}
};


int main() {
    CuentaBancaria cuenta1("Luis", 1000);
    CuentaBancaria cuenta2("Maria", 2000);
    CuentaBancaria cuenta3("Carlos", 1500);
    CuentaBancaria cuenta4("Santiago", 1000);
    CuentaBancaria cuenta5("lol", 2000);
    CuentaBancaria cuenta6("asdf", 1500);
    CuentaBancaria cuenta7("asdff", 1100);
    CuentaBancaria cuenta8("qwer", 2300);
    CuentaBancaria cuenta9("weqrqw", 2500);
    CuentaBancaria cuenta10("qwer", 1500);
    CuentaBancaria cuenta11("porque", 2100);
    CuentaBancaria cuenta12("muchas", 1510);
    CuentaBancaria cuenta13("tantas", 1020);
    CuentaBancaria cuenta14("parar", 2000);
    CuentaBancaria cuenta15("una", 1500);
    CuentaBancaria cuenta16("opcion", 1000);
    CuentaBancaria cuenta17("???", 2000);
    CuentaBancaria cuenta18("naaa", 1500);
    CuentaBancaria cuenta19("carmen", 1500);
    CuentaBancaria cuenta20("javier", 1500);
    CuentaBancaria cuenta21("se repite", 2100);
    CuentaBancaria cuenta22("no creo", 1510);
    CuentaBancaria cuenta23("eficiencia 0", 1020);
    CuentaBancaria cuenta24("cuanto mas", 2000);
    CuentaBancaria cuenta25("nombres raros", 1500);
    CuentaBancaria cuenta26("enrique", 1000);
    CuentaBancaria cuenta27("por que", 2000);
    CuentaBancaria cuenta28("porque no", 1500);
    CuentaBancaria cuenta29("carballo", 1500);
    CuentaBancaria cuenta30("ortega", 1500);

    int opcionCuenta;
    do {
        cout << "\n--- Seleccione una cuenta ---\n";
        cout << "Se disponen de 30 cuentas, digite el numero de cuenta a la que quiere ingresar" << endl;
        cout << "31. Salir"<<endl;
        cout << "Elija una opcion: ";
        cin >> opcionCuenta;

        if (opcionCuenta < 1 || opcionCuenta > 31) {
            cout << "Opción no válida, intente nuevamente." << endl;
            continue;
        }

        if (opcionCuenta == 31) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        int opcion;
        do {
            cout << "\n--- Menu de operaciones ---\n";
            cout << "1. Consultar saldo\n";
            cout << "2. Depositar dinero\n";
            cout << "3. Retirar dinero\n";
            cout << "4. Volver al menu de cuentas\n";
            cout << "Elija una opcion: ";
            cin >> opcion;

            double monto;
            switch (opcion) {
            case 1:
                if (opcionCuenta == 1) cuenta1.consultarSaldo();
                else if (opcionCuenta == 2) cuenta2.consultarSaldo();
                else if (opcionCuenta == 3) cuenta3.consultarSaldo();
                else if (opcionCuenta == 4) cuenta4.consultarSaldo();
                else if (opcionCuenta == 5) cuenta5.consultarSaldo();
                else if (opcionCuenta == 6) cuenta6.consultarSaldo();
                else if (opcionCuenta == 7) cuenta7.consultarSaldo();
                else if (opcionCuenta == 8) cuenta8.consultarSaldo();
                else if (opcionCuenta == 9) cuenta9.consultarSaldo();
                else if (opcionCuenta == 10) cuenta10.consultarSaldo();
                else if (opcionCuenta == 11) cuenta11.consultarSaldo();
                else if (opcionCuenta == 12) cuenta12.consultarSaldo();
                else if (opcionCuenta == 13) cuenta13.consultarSaldo();
                else if (opcionCuenta == 14) cuenta14.consultarSaldo();
                else if (opcionCuenta == 15) cuenta15.consultarSaldo();
                else if (opcionCuenta == 16) cuenta16.consultarSaldo();
                else if (opcionCuenta == 17) cuenta17.consultarSaldo();
                else if (opcionCuenta == 18) cuenta18.consultarSaldo();
                else if (opcionCuenta == 19) cuenta19.consultarSaldo();
                else if (opcionCuenta == 20) cuenta20.consultarSaldo();
                else if (opcionCuenta == 21) cuenta21.consultarSaldo();
                else if (opcionCuenta == 22) cuenta22.consultarSaldo();
                else if (opcionCuenta == 23) cuenta23.consultarSaldo();
                else if (opcionCuenta == 24) cuenta24.consultarSaldo();
                else if (opcionCuenta == 25) cuenta25.consultarSaldo();
                else if (opcionCuenta == 26) cuenta26.consultarSaldo();
                else if (opcionCuenta == 27) cuenta27.consultarSaldo();
                else if (opcionCuenta == 28) cuenta28.consultarSaldo();
                else if (opcionCuenta == 29) cuenta29.consultarSaldo();
                else if (opcionCuenta == 30) cuenta30.consultarSaldo();
                break;
            case 2:
                cout << "Ingrese el monto a depositar: ";
                cin >> monto;
                if (opcionCuenta == 1) cuenta1.depositar(monto);
                else if (opcionCuenta == 2) cuenta2.depositar(monto);
                else if (opcionCuenta == 3) cuenta3.depositar(monto);
                else if (opcionCuenta == 4) cuenta4.depositar(monto);
                else if (opcionCuenta == 5) cuenta5.depositar(monto);
                else if (opcionCuenta == 6) cuenta6.depositar(monto);
                else if (opcionCuenta == 7) cuenta7.depositar(monto);
                else if (opcionCuenta == 8) cuenta8.depositar(monto);
                else if (opcionCuenta == 9) cuenta9.depositar(monto);
                else if (opcionCuenta == 10) cuenta10.depositar(monto);
                else if (opcionCuenta == 11) cuenta11.depositar(monto);
                else if (opcionCuenta == 12) cuenta12.depositar(monto);
                else if (opcionCuenta == 13) cuenta13.depositar(monto);
                else if (opcionCuenta == 14) cuenta14.depositar(monto);
                else if (opcionCuenta == 15) cuenta15.depositar(monto);
                else if (opcionCuenta == 16) cuenta16.depositar(monto);
                else if (opcionCuenta == 17) cuenta17.depositar(monto);
                else if (opcionCuenta == 18) cuenta18.depositar(monto);
                else if (opcionCuenta == 19) cuenta19.depositar(monto);
                else if (opcionCuenta == 20) cuenta20.depositar(monto);
                else if (opcionCuenta == 21) cuenta21.depositar(monto);
                else if (opcionCuenta == 22) cuenta22.depositar(monto);
                else if (opcionCuenta == 23) cuenta23.depositar(monto);
                else if (opcionCuenta == 24) cuenta24.depositar(monto);
                else if (opcionCuenta == 25) cuenta25.depositar(monto);
                else if (opcionCuenta == 26) cuenta26.depositar(monto);
                else if (opcionCuenta == 27) cuenta27.depositar(monto);
                else if (opcionCuenta == 28) cuenta28.depositar(monto);
                else if (opcionCuenta == 29) cuenta29.depositar(monto);
                else if (opcionCuenta == 30) cuenta30.depositar(monto);
                break;
            case 3:
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;
                if (opcionCuenta == 1) cuenta1.retirar(monto);
                else if (opcionCuenta == 2) cuenta2.retirar(monto);
                else if (opcionCuenta == 3) cuenta3.retirar(monto);
                else if (opcionCuenta == 4) cuenta4.retirar(monto);
                else if (opcionCuenta == 5) cuenta5.retirar(monto);
                else if (opcionCuenta == 6) cuenta6.retirar(monto);
                else if (opcionCuenta == 7) cuenta7.retirar(monto);
                else if (opcionCuenta == 8) cuenta8.retirar(monto);
                else if (opcionCuenta == 9) cuenta9.retirar(monto);
                else if (opcionCuenta == 10) cuenta10.retirar(monto);
                else if (opcionCuenta == 11) cuenta11.retirar(monto);
                else if (opcionCuenta == 12) cuenta12.retirar(monto);
                else if (opcionCuenta == 13) cuenta13.retirar(monto);
                else if (opcionCuenta == 14) cuenta14.retirar(monto);
                else if (opcionCuenta == 15) cuenta15.retirar(monto);
                else if (opcionCuenta == 16) cuenta16.retirar(monto);
                else if (opcionCuenta == 17) cuenta17.retirar(monto);
                else if (opcionCuenta == 18) cuenta18.retirar(monto);
                else if (opcionCuenta == 19) cuenta19.retirar(monto);
                else if (opcionCuenta == 20) cuenta20.retirar(monto);
                else if (opcionCuenta == 21) cuenta21.retirar(monto);
                else if (opcionCuenta == 22) cuenta22.retirar(monto);
                else if (opcionCuenta == 23) cuenta23.retirar(monto);
                else if (opcionCuenta == 24) cuenta24.retirar(monto);
                else if (opcionCuenta == 25) cuenta25.retirar(monto);
                else if (opcionCuenta == 26) cuenta26.retirar(monto);
                else if (opcionCuenta == 27) cuenta27.retirar(monto);
                else if (opcionCuenta == 28) cuenta28.retirar(monto);
                else if (opcionCuenta == 29) cuenta29.retirar(monto);
                else if (opcionCuenta == 30) cuenta30.retirar(monto);
                break;
            case 4:
                cout << "Volviendo al menu de cuentas..." << endl;
                break;
            default:
                cout << "Opción no válida, intente nuevamente." << endl;
            }
        } while (opcion != 4);
    } while (opcionCuenta != 31);

    return 0;
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
