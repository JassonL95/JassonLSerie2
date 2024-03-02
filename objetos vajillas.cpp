#include <iostream>
#include <string>
 
using namespace std;

//Declaramos la clase cubiertos
class Vajillas{
	public:
		//Atributos de la clase 
		string color;
		string marca;
		string material;
		float tamanio;
				
		//constructor para inicializar atributos 
		Vajillas(string _color,string _marca,string _material,float _tamanio){
		
		color = _color;
		marca = _marca;
		material = _material;
		tamanio = _tamanio;
		
        //imprimimos mensaje para iniciar que el objeto del Cubiertos se creo
        cout<<"se creo el objeto vajillas "<<endl;
}
        //Destructor se ejecuta cuando se destruye un objeto de la clase
        ~Vajillas(){
        	
        	//imprimimos un mensaje 
		  cout<<"se destruyo el objeto Vajillas "<<endl;
	  }
         
         //Agregamos Metodos y acciones del objeto 
         //Metodo que representa la accion de cubiertos
         void usar(){
         	cout<<"La vajilla esta para usar. "<<endl;
		 }
		 
		 //Metodo que representa la accion de cubiertos
		 void nousar(){
		 	cout<<"La vajilla no se ouede usar. "<<endl;
		 }
};

		 // funcion principal Main 
		 int main(){
		 	//Creamos un objeto
		 	Vajillas olla("Negro" , "Dell" ,"Acero",20);
		 	
		 	//hacemos un llamado a los metodos creados 
		 	olla.usar();
		 	olla.nousar();
		 	
		 	//Creamos un objeto
		 	Vajillas sarten("Azul" , "Oster" ,"Acero inoxidable",15);
		 	
		 	//hacemos un llamado a los metodos creados 
		 	sarten.usar();
		 	sarten.nousar();
		 	
		 	
		 	 return 0;
		 }