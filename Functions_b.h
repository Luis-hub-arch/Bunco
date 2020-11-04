#ifndef FUNCTIONS_B_H_INCLUDED
#define FUNCTIONS_B_H_INCLUDED
/// PROTOTIPOS

void TirarDados(int v[],int tam,int limite);

int contarNumerosRepetidos(int v[],int numero, int tam);

void mostrarVector(int v[], int tam);

int sumarVector( int v[], int tam);

void cargarVector(int v[],int tam);

int maximoVector(int v[], int tam);

void ponerCero( int v[], int tam);

/// FUNCIONES

int MenuPrincipal(){
    int opc;
    cout<< "MENU PRINCIPAL" << endl;
    cout<<"1. Juego para un jugador"<<endl;
    cout<<"2. juego para dos jugadores"<<endl;
    cout<<"3. Mostrar Puntuacion mas alta"<<endl;
    cout<<"4. Modo Simulado"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"Elija una opcion: ";
    cin>>opc;
    return opc;
}



int maximoVector(int v[],int tam){
    int i,posMax= 0 ;
    for (i=1;i<tam;i++){
        if (v[i]>v[posMax]) {
        posMax=i;
        }
    }
    return posMax;
}

void ponerCero( int v[], int tam){
    int i;
    for (i= 0 ;i<tam;i++){
    v[i]= 0 ;
    }
}

void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
    cout<<"INGRESE NUMERO: ";
    cin>>v[i];
    }
}

void TirarDados( int v[], int tam){
    int i;
    srand(time( NULL ));
    for ( i= 0 ; i<tam; i++ ){
        v[i]=(rand()%6)+ 1 ;
    }
}

int sumarVector( int v[], int tam ){
    int i, suma= 0 ;
    for (i= 0 ;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}


int contarNumerosRepetidos( int v[],int tam,int numero){
    int i, cant= 0 ;
    for (i=0;i<tam;i++){
        if (v[i]==numero) cant++;
    }
    return cant;
}

void mostrarVector( int v[], int tam){
    int i;
    for (i=0;i<tam;i++){
    cout <<v[i]<< "\t" ;
    }
}

void ordenarVector( int v[], int tam ){
    int i,j, posmin, aux;
    for (i= 0 ;i<tam -1 ;i++){
        posmin=i;
        for (j=i+ 1 ;j<tam;j++){
            if (v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}




#endif // FUNCTIONS_B_H_INCLUDED
