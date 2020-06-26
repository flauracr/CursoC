// Ejercicios3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


//1.	Escriba un programa que genere la siguiente salida(utilice manipuladores de entrada/salida)
//ESTUDIANTE    PROMEDI0 DEL CURSO 
//1             84.5 
//2             67.2
//3             77.4
//4             86.8
//5             94.7

//2.	Escriba un programa que solicite la medida del radio de un círculo y calcule el área 
//y el perímetro, los resultados se deben mostrar con dos decimales


//3.	Escriba un programa que solicite el tamaño de un archivo junto(valor y unidad de medida) 
//y realice la conversión a otra unidad solicitada.Trabaje solo con KB, MB y GB.

#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <iomanip>


using namespace std;

/// <summary>
/// Ejercicio 1. Funcion para practicar las instruccione de entrada salida y tipos de datos
/// </summary>
/// <returns>toda la informacion de la funcion</returns>
int EntradaSalida() {

	cout << endl;
	string sCadena = "---------        ESTUDIANTE	----- PROMEDIO---------";
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int num4 = 4;
	int num5 = 5;
	float prom1 = 84.5;
	float prom2 = 96.3;
	float prom3 = 88.2;
	float prom4 = 64.7;
	float prom5 = 55.5;

	cout << sCadena << endl;
	cout << "                    " << num1 << "                    " << prom1 << endl;
	cout << "                    " << num2 << "                    " << prom2 << endl;;
	cout << "                    " << num3 << "                    " << prom3 << endl;;
	cout << "                    " << num4 << "                    " << prom4 << endl;;
	cout << "                    " << num5 << "                    " << prom5 << endl;;

	return 0;
}


int Circulo_Area_Peri() {

	const float PI = 3.1416; //Definimos una constante llamada PI
	int radio;
	float area;
	float perimetro;
	
	//P=2*PI*radio
	//A=πr2
	
	cout << endl;
	cout << "------ Digite el radio del circulo:   ";
	cin>> radio;

	perimetro = 2 * PI * radio;
	area = PI * pow(radio, 2);


	cout << endl;
	cout << "-----  El perimetro del circulo es:   " <<fixed << setprecision(2) << perimetro << endl;
	cout << endl;
	cout << "-----  El area del circulo es:   " << area << endl;
	cout << endl;
	
	return 0;
}


int main()
{
	
	//EntradaSalida();

	Circulo_Area_Peri();
	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
