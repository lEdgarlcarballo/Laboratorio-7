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
	CuentaBancaria cuenta("luis", 1000);

	int opcion;
	do {
		cout << "\n--- Menu de operaciones ---\n";
		cout << "1. Consultar saldo\n";
		cout << "2. Depositar dinero\n";
		cout << "3. Retirar dinero\n";
		cout << "6. Salir\n";
		cout << "Elija una opcion: ";
		cin >> opcion;

		double monto;
		switch (opcion) {
		case 1:
			cuenta.consultarSaldo();
			break;
		case 2:
			cout << "Ingrese el monto a depositar: ";
			cin >> monto;
			cuenta.depositar(monto);
			break;
		case 3:
			cout << "Ingrese el monto a retirar: ";
			cin >> monto;
			cuenta.retirar(monto);
			break;
		case 6:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opción no válida, intente nuevamente." << endl;
		}
	} while (opcion != 6);

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
