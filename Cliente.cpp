#include "Persona.cpp"
#include <iostream>

class Cliente : Persona{

	private : string nit;
	

	public :
	Cliente(){
		
		}
	Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){
	    nit = n;
	
	}	
	//metodos
	//set 
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	//get
	 string getNit(){return nit;}
	 string getNombres(){return nombres;}
	 string getApellidos(){return apellidos;}
	 string getDireccion(){return direccion;}
	 int getTelefono(){return telefono;}
	void mostrar(){
		cout<<"Se a ingresado al metodo"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
    }
};
