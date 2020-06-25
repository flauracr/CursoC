// PracticaArreglosEjercicio2-LAURA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <conio.h>
#include "PracticaArreglosEjercicio2-LAURA.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

/// <summary>
/// 
/// </summary>
/// <param name="numero"></param>
/// <returns></returns>
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
bool ExisteNumero(array<int, 20U> a, int numero)
{

	//La palabra clave auto por sí misma representa un tipo de valor, similar a int o char
	//la variable define en tiempo de ejecucion el tipo
	for (int current : a) {
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
	int numero, i=0;

	//ciclo for que pide el numero al usuario entre 10 y 100


	while (i<=5)
	{
		cout << "Digite un numero entre 10 y 100:\n";
		cin >> numero;
		//llama a la funcion ValidarNumero
		if (!ValidarNumero(numero)) {
			cout << "El numero debe estar entre 10 y 100\n";
		}
		else {
			//llama a la funcion ExisteNumero
			if (!ExisteNumero(a, numero)) {
				a[i] = numero;
				i++;
			}
			else
				cout << "El numero ya existe en el arreglo\n";
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i]<<"\n";
	}
	
}

bool Ejercicio2() {

	int m[3][3];
	int fil=3, col=3;
	int dato;
	//int sumafila;
	//int sumacol;
	int sumadiagonal;
	
	cout << endl;
	cout << "******CUADRADO MAGICO*****" << endl;
	cout << endl;

	srand(time(NULL)); //generar numeros aleatrorios

		
	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			dato = 1 + rand() % (9);//generando numeros aleatrorios del 1 al 9
			m[i][j] = dato;
			cout << m[i][j]<< " ";
		}
		cout << "\n";
	}
	
	cout << "\n";
	//suma de filas
	int sumainicial = 0;
	int sumaactual = 0;
	bool bandera = true;
	int i = 0;


	//sumas de las filas
	while (i<fil && bandera==true)
	{
		sumaactual = 0;
		for (int j = 0; j < col; j++) {
			sumaactual += m[i][j];
		}

		if (i == 0)
		{
			sumainicial = sumaactual;
		}
		else
			if (sumainicial != sumaactual)
			{
				bandera = false;
			}
		i++;
	}

	cout << "\n";

	//sumas de las columnas
	if (bandera)
	{
		while (i < col && bandera == true)
		{
			sumaactual = 0;
			for (int j = 0; j < col; j++) {
				sumaactual += m[j][i];
			}

			if (i == 0)
			{
				sumainicial = sumaactual;
			}
			else
				if (sumainicial != sumaactual)
				{
					bandera = false;
				}
			i++;
		}

		//suma de diagnal

		sumadiagonal = 0;
		for (int i = fil - 1, j = 0; i >= 0 && j < col; i--, j++) {
			sumadiagonal += m[i][j];
		}
		cout << "La suma de la diagonal es: " << sumadiagonal << "\n";

	}
	else

		return false;
}

int main()
{
	//Ejercicio1();

	
	if (Ejercicio2()==false)
	{
		cout << "No es un cuadrado magico: \n";
	}else
		cout << "Si es un cuadrado magico: \n";



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
