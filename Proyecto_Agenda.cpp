#include <iostream>
#include <cstring>
#include <string.h>
#define maxchar 50



using namespace std;

struct nodo{
	
	int codigo;
	char nombres[maxchar];
	char descripcion[maxchar];
	char editorial[maxchar];
	struct nodo *siguiente;
	
};

typedef struct nodo *Tlibro;



void menu_opcion(void){
		system ("color 9");//Para dar color al fondo de pantalla y los caracteres.
	//cout<<"          같같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;
	cout<< "        MENU PRINCIPAL BIBLIOTECA"<< endl;
	cout<<"       같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;        
	
		cout<<"	1. Registrar libros"<<endl;
		cout<<"	2. Mostrar libros"<<endl;
		cout<<"	3. Actualizar libros"<<endl;
		cout<<"	4. Eliminar libros"<<endl;
		cout<<"	5. Buscar libros"<<endl;
		cout<<"	6. Salir"<<endl;
		cout<<"  	-------------------------"<< endl;
		cout<<" "<<endl;
		
		cout<<"	Ingrese una opcion:"<<endl;
}

int main(void){
	Tlibro lista =NULL;
	Tlibro mostrar =NULL;
	int opc;
	system ("color 9");//Para dar color al fondo de pantalla y los caracteres.

		do{
		menu_opcion();
		cin >>opc;
		
		switch(opc){
			case 1: //registrar_libros(lista);
				cout<<"El libro "/*<<guardar_libro<<*/" se guardo con exito!!"<<endl; // SE DEBE GUARDAR EN DB
				//cout<<" "<<endl;
				system("pause");
				break;
		}
		
		switch(opc){
			case 2: //mostrar_libros(lista);
			system("pause");	
			break;
		}
		
		switch(opc){
			case 3: //actualizar_libros(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 4://eliminar_libros(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 5: //buscar_libros(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 6:
				//SALIR
				break;
		}
		
	}while(opc!=6);
	
	return 0;
}
