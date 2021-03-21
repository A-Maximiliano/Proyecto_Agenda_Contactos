#include <iostream>
#include <cstring>
#include <string.h>
#define maxchar 50



using namespace std;

struct nodo{
	
	int telefono;
	char nombres[maxchar];
	char direccion[maxchar];
	char email[maxchar];
	struct nodo *siguiente;
	
};

typedef struct nodo *Contact;

//CODIGO PARA REGISTRAR LIBRO
void registrar_libros(Contact &lista){
	system ("cls");
	system ("color F2");
	
	Contact t,q = new (struct nodo);
	cout<< "\n\n\t\t[Registro de Libros]\n";
	cout<< "\t\t ---------------------\n";
	cout << "\n\tDatos de libros";
	cin.ignore();
	cout<<"\n\n\tCodigo: ";
	cin>>q->telefono;
	cin.ignore();cout<<"\n\tNombre: ";
	cin.getline(q->nombres,maxchar);
	cin.ignore();cout<<"\tDescripcion: ";
	cin.getline(q->direccion,maxchar);
	cin.ignore();cout<<"\tEditorial: ";
	cin.getline(q->email,maxchar);
	
	system("cls"); system ("color 0A");
	q->siguiente = NULL;
	
	if (lista == NULL){
		
		lista = q;
	}else{
		t = lista;
		while(t->siguiente !=NULL){
			t= t->siguiente;
		}
		t->siguiente =q;
	}	
}

//CODIGO PARA MOSTRAR LIBRO
void mostrar_libros(Contact mostrar){
	int i =1;
	while(mostrar!=NULL){
		cout<< "Mostrar libro";
		cout<< "Datos del libro "<<i<<"";
		cout << "Codigo: "<<mostrar->telefono<<endl;
		cout << "Codigo: "<<mostrar->nombres<<endl;
		cout << "Codigo: "<<mostrar->direccion<<endl;
		cout << "Codigo: "<<mostrar->email<<endl;	
		
		mostrar= mostrar->siguiente,
		i++;
	}
}

//CODIGO PARA ELIMINAR LIBRO
void eliminar_libros (Contact eliminar){
	int cod;
	Contact t,q;
	q=eliminar;
	cout<< "Eliminar libro";
	cout<< "Digitar codigo del libro: ";
	cin>>cod;
		while(q!=NULL){
		if(q->telefono==cod){
			if(q==eliminar)
				eliminar=eliminar->siguiente;
			else
				t->siguiente=q->siguiente;
				delete(q);
				cout<<"Se elimino";	
				return;
			}else{
				t=q;
				q=q->siguiente;
			}
		}
		if(q==NULL)
		cout<<"Codigo incorrecto";
}

void buscar_libros(Contact buscar){
	int cod;
	Contact q;
	q=buscar;
	cout<<"\n\n\n\tBUSCAR LIBRO EN LA BIBLIOTECA";
    cout<<"\n\n\tINGRESE EL CODIGO:"; cin>>cod;
    while(q!=NULL){
    if(q->telefono==cod){
                system("cls");
                cout<<"\n\tDATOS DEL LIBRO  ";
                cout<<"\n\t--------------------";
                cout<<"\n\n\tCODIGO   : "<<q->telefono<<endl;
                cout<<"\n\tNOMBRE  : "<<q->nombres<<endl;
                cout<<"\tDESCRIPCION: "<<q->direccion<<endl;
                cout<<"\tEDITORIAL: "<<q->email<<endl;
                cout<<"\n";
                break;
    
            }else {
                q=q->siguiente;
                //cout<<"\nLibro no encontrado\n"; break;
        }
}
    
	
}


void menu_opcion(void){
		system ("color 9");//Para dar color al fondo de pantalla y los caracteres.
	//cout<<"          같같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;
	cout<< "        MENU PRINCIPAL BIBLIOTECA"<< endl;
	cout<<"       같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;        
	
		cout<<"	1. Registrar contactos"<<endl;
		cout<<"	2. Mostrar contactos"<<endl;
		cout<<"	3. Eliminar contactos"<<endl;
		cout<<"	4. Buscar contacto"<<endl;
		cout<<"	5. Salir"<<endl;
		cout<<"  	-------------------------"<< endl;
		cout<<" "<<endl;
		
		cout<<"	Ingrese una opcion:"<<endl;
}

int main(void){
	Contact lista =NULL;
	Contact mostrar =NULL;
	int opc;
	system ("color 9");//Para dar color al fondo de pantalla y los caracteres.

		do{
		menu_opcion();
		cin >>opc;
		
		switch(opc){
			case 1: registrar_libros(lista);
				cout<<"El libro "/*<<guardar_libro<<*/" se guardo con exito!!"<<endl; // SE DEBE GUARDAR EN DB
				//cout<<" "<<endl;
				system("pause");
				break;
		}
		
		switch(opc){
			case 2: mostrar_libros(lista);
			system("pause");	
			break;
		}
		
		switch(opc){
			case 3: //actualizar_libros(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 4:eliminar_libros(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 5: buscar_libros(lista);
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
