// PracticaArreglosEjercicio2-LAURA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <conio.h>
#include "PracticaArreglosEjercicio2-LAURA.h"
using namespace std;

/// <summary>
/// Funcion que valida si un numero cumple
/// con los requisitos para ser agregado al arreglo
/// </summary>
/// <param name="numero">El numero a agregar</param>
/// <returns>verdadero si no cumple con las restricciones verdadero si 
// las cumple. El numero debe de estar entre 10 y 100 </returns>
bool ValidarNumero(int numero) {
	if (numero < 10 || numero > 100)
		return false;
	return true;
}

/// <summary>
/// Funcion -
/// </summary>
/// <param name="a"></param>
/// <param name="numero"></param>
/// <returns></returns>
bool ExisteNumero(std::array<int, 20U> a, int numero)
{

	for (auto& current : a) {
		if (current == numero)
		{
			cout << "Numero ya existe";
			return true;
		}
	}
	return false;
}

int main()
{
	//delaracion y limpieza del arreglo
	array<int, 20> a = {};
	//numero que se ingresa
	int numero;
	
	//ciclo for
	for (int i = 0; i < 5; i++) {
		cout << "Digite un numero entre 10 y 100:\n";
		cin >> numero;
		if (!ValidarNumero(numero)) {
			cout << "El numero debe estar entre 10 y 100";
		}
		else {
			if (!ExisteNumero(a, numero)) {
				a[i] = numero;
			}
			else
				cout << "El numero ya existe en el arreglo";
		}
	}

	return 0;
}




/***** EJERCICIO 2-LAURA.Recibir como entrada 20 números, cada uno de los cuales debe estar entre 10 y 100. 
A medida que se lea cada número, validarlo y almacenarlo en un arreglo sólo si no es un 
duplicado de un número previamente leído. 
Después de llenar el arreglo debe mostrar los números almacenados y la cantidad de veces 
que se repitió un número. *****/

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
