#include <iostream>
#include <string>
 
using namespace std;

//Declaramos la clase cubiertos
class Cubiertos{
	public:
		//Atributos de la clase 
		string color;
		string marca;
		string material;
		float tamanio;
				
		//constructor para inicializar atributos 
		Cubiertos(string _color,string _marca,string _material,float _tamanio){
		
		color = _color;
		marca = _marca;
		material = _material;
		tamanio = _tamanio;
		
        //imprimimos mensaje para iniciar que el objeto del Cubiertos se creo
        cout<<"se creo el objeto cubiertos "<<endl;
}
        //Destructor se ejecuta cuando se destruye un objeto de la clase
        ~Cubiertos(){
        	
        	//imprimimos un mensaje 
		  cout<<"se destruyo el objeto Cubiertos "<<endl;
	  }
         
         //Agregamos Metodos y acciones del objeto 
         //Metodo que representa la accion de cubiertos
         void usar(){
         	cout<<"El cubierto esta para usar. "<<endl;
		 }
		 
		 //Metodo que representa la accion de cubiertos
		 void nousar(){
		 	cout<<"El cubierto no se ouede usar. "<<endl;
		 }
};

		 // funcion principal Main 
		 int main(){
		 	//Creamos un objeto
		 	Cubiertos tenedor("Negro" , "Oster" ,"plata",12);
		 	
		 	//hacemos un llamado a los metodos creados 
		 	tenedor.usar();
		 	tenedor.nousar();
		 	
		 	//Creamos un objeto
		 	Cubiertos espatula("Negro" , "Oster" ,"plata",12);
		 	
		 	//hacemos un llamado a los metodos creados 
		 	espatula.usar();
		 	espatula.nousar();
		 	
		 	
		 	 return 0;
		 }