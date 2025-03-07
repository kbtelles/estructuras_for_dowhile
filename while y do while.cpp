#include <iostream>
using namespace std;
main(){
	//WHILE= Si la condicion es verdadera el ciclo se sigue ejecutando
	
	/* // INCREMENTAR 
	int i=0;
	while(i<5){
		cout<<i<<endl; //error de novato (ciclo infinito)
		i++;
	}
	*/
	
	/*// DECREMENTAR
	int i=5;
	while(i>0){
		cout<<i<<endl; 
		i--;
	}
	*/
	
	//DO WHILE = Ejecuta primero y luego valida si se cumple la condicion
	/*int i=0;
	do{
		cout<<i<<endl; 
		i++;
	}while(i<5);
	*/
	
	//Ejemplo con DO WHILE:
	/*char respuesta;
	do{
		cout<<"Desea ingresar otro valor (s/n) "<<endl;
		cin>>respuesta;
		
	}while(respuesta=='s' || respuesta=='S' );
	*/
	
	//Mismo ejemplo pero con WHILE:
    char respuesta='s';
	while(respuesta=='s' || respuesta=='S' ){
		cout<<"Desea ingresar otro valor (s/n) "<<endl;
		cin>>respuesta;
		
	};
	
	system("pause");
}

