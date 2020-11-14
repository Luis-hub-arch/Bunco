#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<string.h>

using namespace std;

#include "funciones.h"

int main(){
    const int tam=3;
    /////////MODO UN JUGADOR////////
    int opcion,x,i;
    int dados[3],puntos[5],maximo;
    int tiradaFallida;
    int TotalPartida, TotalRonda,PuntajeDelJugador;
    int Buncos,tirosRealizados,TotalLanzamientos,LanzamientosPorRonda;
    char nombre1[10],nombre2[10];


    ///////////JUGADOR 1//////////////
    int TotalLanzamientos1,tirosRealizados1,tiradaFallida1,Buncos1,TotalPartida1;
    int LanzamientosPorRonda1,TotalRonda1;

    bool control=true;
    ///////////JUGADOR 1//////////////
    ///////////JUGADOR 2//////////////
    int TotalLanzamientos2,tirosRealizados2,tiradaFallida2,Buncos2,TotalPartida2;
    int LanzamientosPorRonda2,TotalRonda2;
    ///////////JUGADOR 2//////////////
    char ganador[15];
    int buncosganador=0;



    while(true){
        cout<<"1. JUEGO NUEVO PARA UN JUGADOR."<<endl;
        cout<<"2. JUEGO NUEVA PARA DOS JUGADORES."<<endl;
        cout<<"3. MOSTRAR PUNTUACION MAS ALTA."<<endl;
        cout<<"4. MODO SIMULADO (CARGA DE DADOS MANUAL)."<<endl;
        cout<<"0. SALIR."<<endl;
        cin>>opcion;
        system("cls");

        //INICIO DE PROGRAMA//

        switch(opcion){
            case 1: cout<<"INGRESE SU NOMBRE: ";cin>>nombre1;
                    system("cls");
                    TotalLanzamientos=0;
                    tirosRealizados=0;
                    tiradaFallida=0;
                    Buncos=0;
                    TotalPartida=0;
                    for(i=1;i<=2;i++){
                        LanzamientosPorRonda=0;
                        TotalRonda=0;
                            while(TotalRonda<21){
                               /* for(x=0;x<=2;x++){                              // CON ESTE FOR INGRESO LOS NUMEROS->
                                    cout<<"INGRESE EL DADO N_"<<x+1<<":";       // ->PARA PROBAR SI FUNCIONA EL PROGRAMA
                                    cin>>dados[x];
                                }*/
                                cargarAleatorio(dados, tam);
                                TotalLanzamientos++;
                                LanzamientosPorRonda++;
                                maximo=PuntajeTotal(dados,puntos,tam,i);

                                        if(maximo==0){
                                            tiradaFallida++;
                                        }
                                        if(maximo==21){
                                            Buncos++;
                                        }
                                        tirosRealizados++;
                                        TotalRonda+=maximo;
                                        TotalPartida+=maximo;

        ///EMPIEZA: INTERFAZ DURANTE EL TURNO DEL JUGADOR///

    cout << "TURNO DE: " << nombre1 << " | " << "RONDA NUMERO: " << i << " | " << "PUNTAJE ACUMULADO: " << TotalPartida << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "VECES QUE OBTUVO BUNCO: " << Buncos << endl;
    cout << "-----------------------------------------------------------" <<endl;
    cout << "LANZAMIENTO NUMERO: " << LanzamientosPorRonda << endl;
    cout << "-----------------------------------------------------------" << endl << endl;

        cout << dados[0] << " " << dados[1] << " " << dados[2] << "    ";
        ///mostrarVector(dados);
        cout<< "PUNTAJE OBTENIDO: ";
        NombrePuntaje(maximo);
        cout<< "PUNTAJE DE LA RONDA: "<<TotalRonda<<endl;

            system("pause");
            system("cls");
////////////////////////////TERMINA: INTERFAZ DURANTE EL TURNO DEL JUGADOR///////////////////////////
                            }
////////////////////////////EMPIEZA: INTERFAZ ENTRE RONDA Y RONDA////////////////////////////////////

                                cout<< "RONDA NUMERO: " << i << endl;
        cout << "-----------------------------------------------------------" <<endl;
                                cout<< "PUNTAJE " <<nombre1<<": " << TotalPartida << endl;
                                cout<< "BUNCOS: " << Buncos << endl;
                                cout<< "TIRADAS FALLIDAS: "<< tiradaFallida <<endl;
                                cout<< "LANZAMIENTOS: " << TotalLanzamientos << endl;
        cout << "-----------------------------------------------------------" <<endl;
                                    system("pause");
                                    system("cls");
/////////////////////////////////TERMINA: INTERFAZ ENTRE RONDA Y RONDA/////////////////////////////////
                    }
                                PuntajeDelJugador=TotalPartida-(tiradaFallida*3);
///////////////////////////////////EMPIEZA: FIN DE LA PARTIDA//////////////////////////////////////////
                                cout<<"FINAL DE LA PARTIDA."<<endl;
                                cout<<"JUGADOR: "<<nombre1<<endl;
                                strcpy(ganador,nombre1);/// ALMACENA NOMBRE DEL PUNTAJE
                                cout<<"CANTIDAD DE BUNCOS REALIZADOS: "<< Buncos <<endl;
                                buncosganador=Buncos;/// ALMACENA BUNCOS DEL JUGADOR
                                cout<<"CANTIDAD DE TIRADAS FALLIDAS: "<< tiradaFallida<<endl;
                                cout<<"CANTIDAD DE TIROS NECESARIOS PARA COMPLETAR LAS 6 RONDAS: "<<tirosRealizados<<endl;
                                cout<<"PUNTAJE TOTAL ACUMULADO: "<<PuntajeDelJugador<<endl;
                                system("pause");
                                system("cls");
                                break;
//////////////////////////////////TERMINA: FIN DE LA PARTIDA////////////////////////////////////////////

            case 2: cout<<"INGRESE EL NOMBRE DEL PRIMER JUGADOR: ";cin>>nombre1;
                    cout<<"INGRESE EL NOMBRE DEL SEGUNDO JUGAODR: ";cin>>nombre2;

                    TotalLanzamientos1=0;
                    tirosRealizados1=0;
                    tiradaFallida1=0;
                    Buncos1=0;
                    TotalPartida1=0;

                    TotalLanzamientos2=0;
                    tirosRealizados2=0;
                    tiradaFallida2=0;
                    Buncos2=0;
                    TotalPartida2=0;

                    for(i=1;i<=2;i++){
                        LanzamientosPorRonda1=0;
                        TotalRonda1=0;
                        LanzamientosPorRonda2=0;
                        TotalRonda2=0;
                            while(TotalRonda1<21&&TotalRonda2<21){ //jugador 1

                                    while(TotalRonda1<21&&control==true){

                                    for(x=0;x<=2;x++){                              // CON ESTE FOR INGRESO LOS NUMEROS->
                                    cout<<"INGRESE EL DADO N_"<<x+1<<":";       // ->PARA PROBAR SI FUNCIONA EL PROGRAMA
                                    cin>>dados[x];
                                    }

                                        //cargarAleatorio(dados,tam);
                                        TotalLanzamientos1++;
                                        LanzamientosPorRonda1++;
                                        maximo=PuntajeTotal(dados,puntos,tam,i);

                                        if(maximo==0){
                                            tiradaFallida1++;
                                            control=false;
                                        }
                                        if(maximo==21){
                                            Buncos1++;
                                        }
                                        tirosRealizados1++;
                                        TotalRonda1+=maximo;
                                        TotalPartida1+=maximo;

//////////////////////EMPIEZA: INTERFAZ DURANTE EL TURNO DEL JUGADOR////////////////////////////

    cout << "TURNO DE: " << nombre1 << " | " << "RONDA NUMERO: " << i << " | " << "PUNTAJE ACUMULADO: " << TotalPartida1 << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "VECES QUE OBTUVO BUNCO: " << Buncos1 << endl;
    cout << "-----------------------------------------------------------" <<endl;
    cout << "LANZAMIENTO NUMERO: " << LanzamientosPorRonda1 << endl;
    cout << "-----------------------------------------------------------" << endl << endl;

        cout << dados[0] << " " << dados[1] << " " << dados[2] << "    ";
        ///mostrarVector(dados);
        cout<< "PUNTAJE OBTENIDO: ";
        NombrePuntaje(maximo);
        cout<< "PUNTAJE DE LA RONDA: "<<TotalRonda1<<endl;

            system("pause");
            system("cls");
////////////////////////////TERMINA: INTERFAZ DURANTE EL TURNO DEL JUGADOR///////////////////////////

                                    }
                                            cout << "RONDA NUMERO: " << i << endl;
                                            cout << "PROXIMO TURNO: " << nombre2<< endl;
                                            cout << "---------------------------------------" << endl;
                                            cout << "PUNTAJE " << nombre1 <<": "<< TotalPartida1 << " PUNTOS" << endl;
                                            cout << "CANTIDAD DE BUNCOS: "<< Buncos1 <<endl;
                                            cout << "---------------------------------------" << endl;
                                            cout << "PUNTAJE "<<nombre2<<": " << TotalPartida2 << " PUNTOS" << endl;
                                            cout << "CANTIDAD DE BUNCOS: "<< Buncos2 <<endl;
                                            system("pause");
                                            system("cls");

                                    control=true;

                                        while(TotalRonda2<21&&control==true){ // jugador 2

                                        for(x=0;x<=2;x++){                              // CON ESTE FOR INGRESO LOS NUMEROS->
                                        cout<<"INGRESE EL DADO N_"<<x+1<<":";       // ->PARA PROBAR SI FUNCIONA EL PROGRAMA
                                        cin>>dados[x];
                                        }

                                            //cargarAleatorio(dados,tam);
                                            TotalLanzamientos2++;
                                            LanzamientosPorRonda2++;
                                            maximo=PuntajeTotal(dados,puntos,tam,i);
                                            NombrePuntaje(maximo);

                                            if(maximo==0){
                                                tiradaFallida2++;
                                                control=false;
                                            }
                                            if(maximo==21){
                                                Buncos2++;
                                            }
                                            tirosRealizados2++;
                                            TotalRonda2+=maximo;
                                            TotalPartida2+=maximo;

//////////////////////EMPIEZA: INTERFAZ DURANTE EL TURNO DEL JUGADOR////////////////////////////

    cout << "TURNO DE: " << nombre2 << " | " << "RONDA NUMERO: " << i << " | " << "PUNTAJE ACUMULADO: " << TotalPartida2 << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "VECES QUE OBTUVO BUNCO: " << Buncos2 << endl;
    cout << "-----------------------------------------------------------" <<endl;
    cout << "LANZAMIENTO NUMERO: " << LanzamientosPorRonda2 << endl;
    cout << "-----------------------------------------------------------" << endl << endl;

        cout << dados[0] << " " << dados[1] << " " << dados[2] << "    ";
        ///mostrarVector(dados);
        cout<< "PUNTAJE OBTENIDO: ";
        NombrePuntaje(maximo);
        cout<< "PUNTAJE DE LA RONDA: "<<TotalRonda2<<endl;

            system("pause");
            system("cls");
////////////////////////////TERMINA: INTERFAZ DURANTE EL TURNO DEL JUGADOR///////////////////////////

                                        }
                                            cout << "RONDA NUMERO: " << i << endl;
                                            cout << "PROXIMO TURNO: " << nombre1<< endl;
                                            cout << "---------------------------------------" << endl;
                                            cout << "PUNTAJE " << nombre2 <<": "<< TotalPartida2 << " PUNTOS" << endl;
                                            cout << "CANTIDAD DE BUNCOS: "<< Buncos2 <<endl;
                                            cout << "---------------------------------------" << endl;
                                            cout << "PUNTAJE "<<nombre1<<": " << TotalPartida1 << " PUNTOS" << endl;
                                            cout << "CANTIDAD DE BUNCOS: "<< Buncos1 <<endl;
                                            system("pause");
                                            system("cls");

                                control=true;
                            }

                                system("pause");
                                system("cls");

                    }
                          if (TotalPartida1>TotalPartida2){/// ANALISIS DE RESULTADO DEL JUEGO DE DOS JUGADORES
                                    cout<<"El nombre del jugador ganador "<<nombre1<<endl;
                                    strcpy(ganador,nombre1);
                                    cout<<"La cantidad de buncos que realiz� "<<Buncos1<<endl;
                                    buncosganador=Buncos1;
                                    cout<<"Su puntaje total acumulado "<<TotalPartida1<<endl;
                                }else{
                                    cout<<"El nombre del jugador ganador "<<nombre2<<endl;
                                    strcpy(ganador,nombre2);
                                    cout<<"La cantidad de buncos que realiz� "<<Buncos2<<endl;
                                    buncosganador=Buncos2;
                                    cout<<"Su puntaje total acumulado "<<TotalPartida2<<endl;
                                    system("pause");
                                    system("cls");
                           }

                    break;

            case 3: cout << "FIN DEL JUEGO" <<endl;
                    cout<<"GANADOR: "<<ganador<<endl;
                    cout<<"BUNCOS OBTENIDOS: "<<buncosganador<<endl;
                    system("pause");
                    system("cls");
                    break;
            case 0: cout << "FIN DEL JUEGO" <<endl;
                    return 0;
                    break;

            default:cout<<"ERROR DE NUMERO. INTENTE DE NUEVO."<<endl;
                    system("pause");
                    system("cls");
                    break;
        }


    }

    return 0;
}
