#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
        srand(time(0));
	int opcion=0;
	char **almacen = new char*;
        char **respuestas = new char*;
	int posA=0;
	int posB=0;
	int pos1;
	int pos2;
	int controlador;
	int porcentaje=0;
	while(opcion==0){
		cout<<"Ingrese su primera palabra de la Columna A"<<endl;
		almacen[posA]=new char;
		cin>>almacen[posA];
		cout<<"Ingrese el matching de la palabra"<<endl;
		respuestas[posB]=new char;
		cin>>respuestas[posB];
		cout<<"Desea continuar ingresando palabras? 0) = si"<<endl;
		cin>>opcion;
		posA++;
		posB++;
		
	}//FIN WHILE OPCION
	int opcion2=0;
	 //cout<<"\033[h\033[2J";
	system("clear");
	while(opcion2==0){
	cout<<"COLUMNA A"<<endl;

	for(int i = 0; i < posA; i++){
	cout<<"("<<i<<")"<<almacen[i]<<endl;
		}//FIN FOR
	 	
	cout<<"COLUMNA B"<<endl;
	for(int i = 0; i<posB;i++){
	
	cout<<"("<<i<<")"<<respuestas[i]<<endl;	

	}//FIN FOR
	cout<<"INGRESE LA POSICION DE PALABRA QUE QUIERA ENCONTRAR EL MATCH DE LA COLUMNA A"<<endl;
	cin>>pos1;
	cout<<"INGRESE LA POSICION DEL MATCH EN LA COLUMNA B"<<endl;
	cin>>pos2;
	controlador=100/posA;
	if(pos1==pos2&&porcentaje<=100){
	porcentaje+=controlador;
	}else{cout<<"SE EQUIVOCO"<<endl;}

	cout<<"DESEA CONTINUAR? 0 = SI"<<endl;
	cin>>opcion2;
	}//Fin while
	cout<<porcentaje<<"%"<<endl;
	for(int i = 0; i < posA; i++){
	delete almacen[i];
	}
	for(int i = 0; i < posB; i++){
	delete respuestas[i];
	}
	
	delete almacen;
	delete respuestas;
	return 0;
}

