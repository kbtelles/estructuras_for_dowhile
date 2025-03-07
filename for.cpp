#include <iostream>
using namespace std;
main(){
	
	//FOR
	/*>>>>> INCREMENTAR UN FOR
	int contar=0;
	int i=0; 
	              //ej: i++, i+=2, i=i+3 
	for(i=0; i<=12; i++){ //0 hasta a 9
	//variable inicio; finaliza; incrementar o decrementar
	
	
	cout<<i<<endl;
	contar++;
	}
	cout<<"ciclos: "<<contar<<endl;
	cout<<"i fuera: "<<i<<endl;
	
	
	////>>>>>DECREMENTAR UN FOR
	for(int i=10; i>0; i--){
		
	cout<<i<<endl;
	}
	*/

	
	// >>>> Salir del for
    /*for(int i=0; i<10; i++){
		
		if(i==5){
		cout<<"if"<<endl;	
		/* break; //permite salir del ciclo */
		/**continue; //permite saltar del ciclo 
		} 
	    cout<<i<<endl;	
	} 
	
	cout<<"fuera del for"<<endl;
    
		
	
	// >>>>> Usando float en lugar de int
	for(float i=0; i<1; i+=0.1){
		
		cout<<i<<endl;
	}
	*/
	
	// >>> Regla del for
	/*int tam= 0;
	int datos[] = {10,40,100,250,3000};
	tam=sizeof(datos) / sizeof(datos[0]);
	cout<<tam<<endl;
	*/
	
	/*cout<<sizeof(datos)<<endl; //obtiene el tamaño del arreglo en bytes. int=4bytes
	cout<<sizeof(datos[0])<<endl; //regla de tres para sacar el resultado
	*/
	
	/*	
	for(int i=0; i<tam; i++){
		cout<<datos[i]<<endl;
	}

	
	// >>>>> forma mas simple:
	for(int i: datos){
		cout<<i<<endl;
	}
	*/
	
	// >>>>> Variable para imprimir tablas de multiplicar
	/*int tabla = 0, res=0;
	cout<<"Ingrese tabla: ";
	cin>>tabla;
	for(int i=1; i<=10;i++){
		res = tabla * i;
		cout<<tabla<< " X "<<i<<" = "<<res<<endl;
	}
	*/
	
	// >>>> FOR ANIDADO
	int inicio = 0, fin=0, res=0;
	cout<<"Ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"Ingrese tabla final: ";
	cin>>fin;
	
	for(int rango=inicio; rango<=fin; rango++){
	cout<<"Tabla del "<<rango<<endl;	
		for(int i=1; i<=10;i++){
		res = rango * i;
		cout<<rango<< " X "<<i<<" = "<<res<<endl;
	    }
	
	}
	
	system("pause");
}
