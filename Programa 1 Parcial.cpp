#include <iostream>
	
main(){	
int a, b, suma, resta, multiplicacion; 
double division;

	std::cout << "Ingrese dos numeros ";
	std::cin >> a;
	std::cin >> b;
	
	std::cin >> suma = a + b;
	std::cout << "El resultado de la suma es: ", suma ;
	std::cin >> resta = a - b;
	std::cout << "El resultado de la resta es: ", resta;
	std::cin >> multiplicacion = a * b;
	std::cout << "El resultado de la multiplicacion es: ", multiplicacion;
	std::cin >> division = a / b;
	std::cout << "El resultado de la division es: ", division;
	
	
	return 0;
}
