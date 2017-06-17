#include <iostream>
#include "carro.h"

using namespace std;

Carro::Carro(void){

	cout << "Construido!!!";
}
int Carro::mover(string b){
	if (b=="s"){
		vertical++;
		return vertical;
	}
	if (b=="w"){
		vertical--;
		return vertical;
	}
	if (b=="d"){
		horizontal++;
		return horizontal;
	}
	if (b=="a"){
		horizontal--;
		return horizontal;
	}
}
int Carro::get(string a){
	if (a=="hor"){
		return horizontal;
	}
	if (a=="ver"){
		return vertical;
	}
}
