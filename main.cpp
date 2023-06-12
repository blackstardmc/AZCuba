#include <iostream>
#include <string.h>
#include "adminindustria.h"

using namespace std;

int main(int argc, char *argv[])
{
   
    AdminIndustria admin;
	string provincia;int limpias,aLimpiar;
	int opcion;
	do{
		cout<<"Escriba el nombre de la provincia"<<endl;cin>>provincia;
		cout<<"Caballerias limpias"<<endl;cin>>limpias;
		cout<<"Caballerias a Limpiar"<<endl;cin>>aLimpiar;
		admin.insertar(new Industria(provincia,limpias,aLimpiar));
		cout<<"Escriba 1 para continuar agregando"<<endl;cin>>opcion;
	}while(opcion==1 && admin.getCont()<16);
    admin.insertar(new Industria("Havana",7,62));
    admin.insertar(new Industria("Granma",3,19));
    admin.insertar(new Industria("Tunas",4,12));
    admin.insertar(new Industria("Holguin",9,52));
    admin.insertar(new Industria("Santiago",3,92));
    
	//Menor cantidad de caballerias limpias
    int menor=admin.getPosIndustria(0)->getLimpias();
    cout<<admin.getCont()<<endl;
    string posMenor=admin.getPosIndustria(0)->getName();
    for(int i=0;i<admin.getCont();i++){
        if(menor>admin.getPosIndustria(i)->getLimpias()){
            posMenor=admin.getPosIndustria(i)->getName();
            menor=admin.getPosIndustria(i)->getLimpias();
            cout<<"ha sido cambiada"<<endl;
        }
    }
    cout<<"La menor provincia es "<<posMenor<<endl;//admin.getPosIndustria(posMenor)->getName();
    
    //Provincias mas del 90
    cout<<"Provincias que superan el 90%"<<endl;
    for (int i = 0; i < admin.getCont(); i++) {
        if((admin.getPosIndustria(i)->getLimpias()*100)/admin.getPosIndustria(i)->getALimpiar()>90){
                    cout<<admin.getPosIndustria(i)->getName()<<endl;
        }
    }
    
    //Provincias menos del 70
    cout<<"Provincias menores al 70%"<<endl;
    for (int i = 0; i < admin.getCont(); i++) {
        if((admin.getPosIndustria(i)->getLimpias()*100)/admin.getPosIndustria(i)->getALimpiar()<70){
            cout<<admin.getPosIndustria(i)->getName()<<endl;
        }
    }
    //Porciento del pais
    float total=0;
    for (int i = 0; i < admin.getCont(); i++) {
        total+=(100*admin.getPosIndustria(i)->getLimpias())/admin.getPosIndustria(i)->getALimpiar();
    }
    cout<<"Promedio porcentual del pais "<<total/admin.getCont()<<"%";
    
}

