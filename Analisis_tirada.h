#ifndef ANALISIS_TIRADA_H_INCLUDED
#define ANALISIS_TIRADA_H_INCLUDED

/// PROTOTIPOS

int calcularbunco(int v[],int tam,int numeroRonda);

int CalcularRepetidos(int v[],int tam);

int CalcularSuma(int v[],int tam);

int CalcularEscalera(int v[],int tam);

int CalcularCoincidenciaRonda(int v[],int tam, int numeroRonda);


/// FUNCIONES


int calcularbunco(int v[],int tam,int numeroRonda){
    int bunco=contarNumerosRepetidos(v,tam,numeroRonda);
    if (bunco==3) return 21;
    return 0;
}


int CalcularRepetidos(int v[],int tam){
    if(v[0]==v[1] && v[0]==v[2])return 5;
    return 0;
}

int CalcularSuma(int v[],int tam){
    int suma=sumarVector(v,tam);
    if(suma%5==0) return 3;
    return 0;
}
int CalcularEscalera(int v[],int tam){
    ordenarVector(v,tam);
    bool esc=false;
    int i,c=0;
    for(i=1;i<3;i++){
        if (v[i-1]+1==v[i])c++;
    }
    if (c==2) esc=true;

    //// ver si son consecutivos pongo ordenado en true

    if(esc) return 2;
    return 0;
}

int CalcularCoincidenciaRonda(int v[],int tam,int numeroRonda){
    int i,cr=0;
    for(i=0;i<tam;i++){
        if (v[i]==numeroRonda)cr++;
    }
    if(cr<3)return cr*1;
    return 0;

}


int AnalisisTirada(int v[],int tam,int numeroRonda){
    int puntos[5], pos;
    puntos[0]=calcularbunco(v,tam,numeroRonda);
    puntos[1]=CalcularRepetidos(v,tam);
    puntos[2]=CalcularSuma(v,tam);
    puntos[3]=CalcularEscalera(v,tam);
    puntos[4]=CalcularCoincidenciaRonda(v,tam,numeroRonda);

    pos=maximoVector(puntos,5); // DEVUELVE INDICE DEL MAYOR PUNTAJE OBTENIDO

    if(puntos[pos]!=0){
        cout<<"PUNTAJE: "<<puntos[pos]<<endl;
        cout<<"SACASTE: ";
        switch(pos){
            case 0: cout<<"BUNCO!!!"<<endl;
                break;
            case 1:cout<<" 3 NUMEROS REPETIDOS, SUMAS 5 PUNTOS"<<endl;
                break;
            case 2:cout<<"LA SUMA DIVISIBLE POR 5, SUMAS 3 PUNTOS"<<endl;
                break;
            case 3:cout<<"ESCALERA, SUMAS 2 PUNTOS"<<endl;
                break;
            case 4:cout<< puntos[pos] <<" NUMEROS QUE COINCIDEN CON LA RONDA " <<endl;
                break;
        }
    }else {
        cout<<" UNA JUGADA FALLIDA"<<endl;
    }
    return puntos[pos];
}




#endif // ANALISIS_TIRADA_H_INCLUDED
