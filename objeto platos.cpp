#include <iostream>
#include <string>
 
using namespace std;

//Declaramos la clase cubiertos
class Platos{
	public:
		//Atributos de la clase 
		string color;
		string marca;
		string material;
		float tamanio;
				
		//constructor para inicializar atributos 
		Platos(string _color,string _marca,string _material,float _tamanio){
		
		color = _color;
		marca = _marca;
		material = _material;
		tamanio = _tamanio;
		
        //imprimimos mensaje para iniciar que el objeto del Cubiertos se creo
        cout<<"se creo el objeto platos "<<endl;
}
        //Destructor se ejecuta cuando se destruye un objeto de la clase
        ~Platos(){
        	
        	//imprimimos un mensaje 
		  cout<<"se destruyo el objeto platos "<<endl;
	  }
         
         //Agregamos Metodos y acciones del objeto 
         //Metodo que representa la accion de cubiertos
         void usar(){
         	cout<<"El plato esta para usar. "<<endl;
		 }
		 
		 //Metodo que representa la accion de cubiertos
		 void nousar(){
		 	cout<<"El plato no se ouede usar. "<<endl;
		 }
};

		 // funcion principal Main 
		 int main(){
		 	//Creamos un objeto
		 	Platos porcelana("Blanco" , "Marvel" ,"Porcelana",22);
		 	
		 	//hacemos un llamado a los metodos creados 
		 	porcelana.usar();
		 	porcelana.nousar();
		 			 		 	
		 	 return 0;
		 }