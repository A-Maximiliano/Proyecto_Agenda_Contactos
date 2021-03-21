#include <iostream>
#include <cstring>
#include <string.h>
#define maxchar 50



using namespace std;

struct nodo{
	
	int id;
	char nombres[maxchar];
	char direccion[maxchar];
	int telefono;
	char email[maxchar];
	struct nodo *siguiente;
	
};

typedef struct nodo *Contact;

//CODIGO PARA REGISTRAR CONTACTO
void guardar_contacto(Contact &lista){
	system ("cls");
	system ("color F2");
	
	Contact t,q = new (struct nodo);
	cout<< "\n\n\t\t[Registro de nuevos contactos]\n";
	cout<< "\t\t ---------------------\n";
	cout << "\n\tDatos de nuevo contacto";
	
	cin.ignore();cout<<"\n\n\tID de contacto: ";
	cin>>q->id;
	cin.ignore();cout<<"\n\tNombre: ";
	cin.getline(q->nombres,maxchar);
	cin.ignore();cout<<"\tDireccion: ";
	cin.getline(q->direccion,maxchar);
	cin.ignore();cout<<"\tTelefono: ";
	cin>>q->telefono;
	cin.ignore();cout<<"\n\tEmail: ";
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

//CODIGO PARA MOSTRAR CONTACTOS
void mostrar_contactos(Contact mostrar){
	int i =1;
	while(mostrar!=NULL){
		cout<< "Mostrar Contactos";
		cout<< "Datos del contacto "<<i<<""<<endl;
		
		cout << "ID: "<<mostrar->id<<endl;
		cout << "Nombre: "<<mostrar->nombres<<endl;
		cout << "Direccion: "<<mostrar->direccion<<endl;
		cout << "Telefono: "<<mostrar->telefono<<endl;
		cout << "Email: "<<mostrar->email<<endl;	
		
		mostrar= mostrar->siguiente,
		i++;
	}
}

//CODIGO PARA ELIMINAR CONTACTO
void eliminar_contacto(Contact &eliminar){
 
    int cod;
    Contact q,t;
    q=eliminar;
 
    cout<<"\n\n\n\tELIMINAR CONTACTO";
    cout<<"\n\n\tINGRESE EL CODIGO:"; 
	cin>>cod;
	
    while(q!=NULL){
 
            if(q->id==cod){
                if(q==eliminar)
                    eliminar=eliminar->siguiente;
                else
                    t->siguiente=q->siguiente;
                delete(q);
                cout<<"\n\n\tCONTACTO ELIMINADO\n";
                return;
            }else {
                t=q;
                q=q->siguiente;
            }
    }
    if(q==NULL)
        cout<<"\n\tCODIGO INCORRECTO\n";
}

void buscar_contacto(Contact buscar){
	int cod;
	Contact q;
	q=buscar;
	cout<<"\n\n\n\tBUSCAR CONTACTO";
    cout<<"\n\n\tIngrese el ID:"; cin>>cod;
    while(q!=NULL){
    if(q->id==cod){
                system("cls");
                cout<<"\n\tDATOS DEL CONTACTO  ";
                cout<<"\n\t--------------------";
                
                cout<<"\n\n\tID  : "<<q->id<<endl;
                cout<<"\tNOMBRE  : "<<q->nombres<<endl;
                cout<<"\tDIRECCION: "<<q->direccion<<endl;
                cout<<"\tTELEFONO  : "<<q->telefono<<endl;
                cout<<"\tEMAIL: "<<q->email<<endl;
                cout<<"\n";
                break;
    
            }else {
                q=q->siguiente;
                cout<<"\nEl contacto no fue encontrado\n"; break;
        }
}
    
	
}


void menu_opcion(void){
		system ("color 9");//Para dar color al fondo de pantalla y los caracteres.
	//cout<<"          같같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;
	cout<< "        MENU PRINCIPAL DE AGENDA DE CONTACTOS"<< endl;
	cout<<"       ****************************************"<< endl;
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
			case 1: guardar_contacto(lista);
				cout<<"El contacto "/*<<guardar_libro<<*/" se guardo con exito!!"<<endl; // SE DEBE GUARDAR EN DB
				//cout<<" "<<endl;
				system("pause");
				break;
		}
		
		switch(opc){
			case 2: mostrar_contactos(lista);
			system("pause");	
			break;
		}
		
		switch(opc){
			case 3: eliminar_contacto(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 4: buscar_contacto(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 5:
				//SALIR
				break;
		}
		
	}while(opc!=6);
	
	return 0;
}
