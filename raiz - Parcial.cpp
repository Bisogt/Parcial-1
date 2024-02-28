#include <iostream>
#include <math.h>

int main(){
	int num, raiz;
	
	std::cout<<"Ingrese un numero ";
	std::cin>> num;
	
	raiz=sqrt(num);
	
	std::cout<<"La raiz de ", num, "es igual a: ", raiz;
	
	return 0
}
