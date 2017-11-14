#include <iostream>
#include <string>
 
using namespace std;


class pizza{
	private: 
		string nombre, tamanio; // informacion de la pizza
		float precio;


		string nombreC, direccionC;// informacion del cliente
		bool haycambio = false;
	public:
		
		int llamar(pizza);
		int contestado();
		void recibir();
		void esperar();
		void pedir();
		void pagar();
		float cambio(pizza);
		

};



int main(){

	pizza dominos; // se crea un objeto nuevo de tipo pizza que se llama dominos

 // se llama al metodo llamar(), el punto llama

while(!dominos.llamar(dominos)){
	cout << "intentando de nuevo.";
	}


dominos.esperar(); // esperamos lo que nos digan 
dominos.recibir(); // recibimos la pizza
dominos.pagar(); //pagamos la pizza
dominos.cambio(dominos);

}



int pizza::contestado(){
return 1;
}


int pizza::llamar(pizza dominos){ // 0 no contesta, 1 si contesta
	cout << "\nLlamando...\n";
	if(dominos.contestado()){	
	dominos.pedir();}
	else{cout << "Sin respuesta";}

	return dominos.contestado();
	
}

void pizza::pedir(){

	cout<< "Hola, Dominos Pizza.\nMe podria especificar el tipo de pizza que quiere? \n";
	cin >> nombre;
	cout << " \n¿Cual es el tamanio?\n";
	cin >> tamanio;

	// resumen
	cout << "Le confirmo su orden, pidio una pizza tamanio " << tamanio << ",  de ingredientes: " << nombre; 

}

void pizza::esperar(){

	cout << "\n\n\nESPERANDO (20 min)\n\n\n";


}
void pizza::recibir(){

	cout << "\n\n\nrecibir pizza, cuidado, está caiente\n\n\n";


}

void pizza::pagar(){

	cout << "\n\n\nPAGANDO (500)\n\n\n";


}
float pizza::cambio(pizza dominos){
	
	if(dominos.haycambio){
		cout << "Se regresa cambio, 250 \n";

	}else{
	cout << "No hay cambio";
	}
}

