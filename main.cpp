#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

#include "Functions_b.h"
#include "Analisis_tirada.h"

int main(){

    const int tam=3;
    int opc,dados[tam],numeroRonda,res,tiro,j,ptsAcumulados,ptsronda,cBuncos,cFallido,totalTiros;
    char nombre[15];
    opc=MenuPrincipal();
    system("cls");
    switch(opc){
        case 1 :    cout<<"Juego para un juegador"<<endl;
                    cout<<"Ingrese su nombre: ";cin>>nombre;
                    system("cls");
                    cout<<" Presione Cualquier tecla para tirar los dados"<<endl;
                    system("cls");
                    numeroRonda=0;
                    cFallido=0;
                    cBuncos=0;
                    for(j=1;j<7;j++){
                            ptsronda=0;
                            tiro=1;
                            while(ptsronda<21){
                                cout<<"TURNO DE "<<nombre<<endl;
                                numeroRonda=j;
                                cout<<"RONDA N "<<numeroRonda<<endl;
                                cout<<"PUNTOS ACUMULADOS "<<ptsAcumulados<<" Puntos"<<endl;
                                cout<<"--------------------------------------------------------"<<endl;
                                cout<<"VECES QUE OBTUBO BUNCO: "<<cBuncos<<endl;
                                cout<<"--------------------------------------------------------"<<endl;
                                cout<<"LANZAMIENTO N:"<<tiro++<<endl;
                                cout<<"--------------------------------------------------------"<<endl;
                                totalTiros++;
                                //TirarDados(dados,tam);
                                cargarVector(dados,tam);
                                mostrarVector(dados,tam);
                                res=AnalisisTirada(dados,tam,numeroRonda);
                                //cout<<"PUNTOS OBTENIDOS EXTRA: "<<res<<endl;
                                if(res==21) cBuncos++;
                                if(res==0) cFallido++;
                                ptsronda+=res;
                                cout<<"\nPUNTAJE DE LA RONDA: "<<ptsronda<<endl;
                                system("pause");
                                system("cls");
                            }
                            ptsAcumulados+=ptsronda;
                            cout<<"--------------------------------------------------------"<<endl;
                            cout<<"RONDA N "<<": "<<j<<endl;
                            cout<<"--------------------------------------------------------"<<endl;
                            cout<<"PUNTAJE "<<nombre<<": "<<ptsAcumulados<< " PUNTOS"<<endl;
                            cout<<"BUNCOS: "<<cBuncos<<endl;
                            cout<<"TIRADAS FALLIDAS: "<<cFallido<<endl;
                            cout<<"LANZAMIENTOS: "<<totalTiros<<endl;
                            cout<<"--------------------------------------------------------"<<endl;
                            system("pause");
                            system("cls");
                        }
                break;
        case 2 :
                break;
        case 3 :
            break;
        case 4 :
            break;
        case 5 : return 0;
            break;
        default:
            break;
    }

    return 0;
}
