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
/// las cumple. El numero debe de estar entre 10 y 100 </returns>
bool ValidarNumero(int numero) {
	if (numero < 10 || numero > 100)
		return false;
	return true;
}

/// <summary>
/// Funcion que busca en el arreglo a, si existe el numero digitado
/// </summary>
/// <param name="a">es el nombre del arreglo</param>
/// <param name="numero">es el numero que ingresa el usuario</param>
/// <returns>faslso si el numero no esta en el arreglo, verdadero si está</returns>
bool ExisteNumero(std::array<int, 20U> a, int numero)
{

	//La palabra clave auto por sí misma representa un tipo de valor, similar a int o char
	//la variable define en tiempo de ejecucion el tipo
	for (auto& current : a) {
		if (current == numero)
		{
			cout << "Numero ya existe";
			return true;
		}
	}
	return false;
}

void Ejercicio1()
{
	//delaracion y limpieza del arreglo
	array<int, 20> a = {};
	//numero que se ingresa
	int numero;

	//ciclo for que pide el numero al usuario entre 10 y 100
	for (int i = 0; i < 5; i++) {
		cout << "Digite un numero entre 10 y 100:\n";
		cin >> numero;
		//llama a la funcion ValidarNumero
		if (!ValidarNumero(numero)) {
			cout << "El numero debe estar entre 10 y 100";
		}
		else {
			//llama a la funcion ExisteNumero
			if (!ExisteNumero(a, numero)) {
				a[i] = numero;
			}
			else
				cout << "El numero ya existe en el arreglo";
		}
	}
}

void Ejercicio2() {

	
	cout << "CUADRADO MAGICO" << endl;
	
	cout << endl;
	int m[5][5];
	int fil, col;
	memset(m, 0, sizeof(m));
	int i = 0;
	int j = 5 / 2;
	for (int x = 1; x <= 5 * 5; x++)
	{
		m[i][j] = x;
		fil = (i + 1) % 5;
		col = (j + 1) % 5;
			if (m[fil][col] == 0)
			{
				i = fil;
				j = col;
			}
			else
			{
				i = (i - 1 + 5) % 5;
			}
		}
		for (int f = 0; f < 5; f++)
		{
			for (int c = 0; c < 5; c++)
			{
				cout << m[f][c] << " ";
			}
			cout << "\n";
		}

		
		_getch();
		system("cls");

	

}



int main()
{
		
	
	//Ejercicio1();

	Ejercicio2();



	return 0;
}




/***** EJERCICIO 2-LAURA.Recibir como entrada 20 números, cada uno de los cuales debe estar entre 10 y 100. 
A medida que se lea cada número, validarlo y almacenarlo en un arreglo sólo si no es un 
duplicado de un número previamente leído. 
Después de llenar el arreglo debe mostrar los números almacenados y la cantidad de veces 
que se repitió un número. *****/




/*EJERCICIO 7. LAURA	Un cuadrado mágico es una disposición de números naturales en una tabla cuadrada, 
de modo que las sumas de cada columna, de cada fila y de cada diagonal son iguales.
Escriba una función que reciba un arreglo cuadrado de enteros de n×n, e indique si se trata 
de un cuadrado mágico.*/





// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
