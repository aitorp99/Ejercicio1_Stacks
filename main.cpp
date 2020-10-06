/**
 * Hecho por Aitor Pérez Vela
 */
/**                  ENUNCIADO ACTIVIDAD

 * Añadir un campo que almacene el nombre y apellido (char)
 * Añadir un campo que almacene la fecha de nacimiento(elegir lo + optimo)
 * Añadir numero de expediente(int)
 * Crear nueva rama y subir la version
 */
#include <iostream>
#include<string>

using namespace std;

struct vox{

    string nom;
    int exp;
    int dia;
    string mes;
    int anio;
    vox *sgt;
};

vox *peek = NULL;
void push(string nom,int exp,int dia, string mes, int anio){
   vox *nvox =  new vox;
   nvox->nom=nom,nvox->exp=exp,nvox->dia=dia,nvox->mes=mes,nvox->anio=anio,nvox->sgt=peek;
   peek=nvox;
}
void pop(){
    if(peek==NULL)
        cout<<"Nada que imprimir, Stack vacia \n"<<endl;
    else
    peek=peek->sgt;
}
void prt(){
    vox *aux = peek;
     if(aux==NULL)
         cout<<"Nada que imprimir, Stack vacia\n";
     else
         while(aux!=NULL){
             cout<<"\n"<<"Nombre: "<<aux->nom<<" - ";
             cout<<"Expediente: "<<aux->exp<<" \n "<<"\t";
             cout<<"Año de nacimiento: "<<aux->dia<<" de "<<aux->mes<<" del "<<aux->anio<<"  --->";
             aux=aux->sgt;
         }
}
int main(){

    vox *nvox = new vox;
    int op;
    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija ppcion  ?: ",cin>>op;
        switch (op){
            case 1:
                cout<<"Nombre: ",cin>>nvox->nom;
                cout<<"Expediente: ",cin>>nvox->exp;
                cout<<"Día de nacimiento: ",cin>>nvox->dia;
                cout<<"Escriba su mes de  nacimiento: ",cin>>nvox->mes;
                cout<<"Año de nacimiento:  ",cin>>nvox->anio;
                push(nvox->nom,nvox->exp,nvox->dia,nvox->mes,nvox->anio);
                break;
            case 2:
                cout<<"Eliminando ..... : ";
                pop();
                break;
            case 3:
                cout<<"Imprimiendo..... : ";
                prt();
                break;
            case 4:
                cout<<"------Bye--------";
        }
    }while(op!=4);


}

