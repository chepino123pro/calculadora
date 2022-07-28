#include<iostream>

using namespace std;

int main()
{
	int num1;
	int num2;
	int suma;
	int resta;
	int multiplicacion;
	int division;
	
	cout << "Digistes el primer numero: ";
	cin >> num1;
	
	cout << "Digistes el segundo numero: ";
	cin >> num2;
	
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	cout << "La suma es " << suma << endl;
	cout << "La resta es " << resta << endl;
	cout << "La multiplicacion es " << multiplicacion << endl;
	cout << "La division es " << division << endl;
	
	return 0;
	
	
	
}