#include <iostream>

using namespace std;
#include "rlutil.h"

using namespace rlutil;


int Caras(int n);
int Caras2(int n);
int Caras3(int n);

int main (){

    int j,vdados[3]={1,4,6};

    for(j=0;j<3;j++){

           switch(j+1){
           case 1:
               Caras(vdados[j]);
            break;
            case 2:
               Caras2(vdados[j]);
            break;
            case 3:
                Caras3(vdados[j]);
            break;
           }

    }

    getch();

    return 0;
}
        /// DADO 1
int Caras(int n){
    int i;
    for (int i = 2; i < 10; i++) {
            locate(i, 3); printf("%c", 205);
            locate(i, 7); printf("%c", 205);
        }
        // VERTICAL
        for (int i = 4; i < 7; i++) {
            locate(2, i); printf("%c", 186);
            locate(10, i); printf("%c", 186);
        }
        ///ESQUINAS
        locate(2, 3); printf("%c", 201);
        locate(2, 7); printf("%c", 200);
        locate(10, 3); printf("%c", 187);
        locate(10, 7); printf("%c", 188);

    switch(n){

        case 1:
                 locate(6, 5); printf("%c", 254);
            break;
        case 2:
                locate(4, 4); printf("%c", 254);
                locate(8, 6); printf("%c", 254);
            break;
        case 3:
                locate(6, 5); printf("%c", 254);
                locate(8, 4); printf("%c", 254);
                locate(4, 6); printf("%c", 254);
            break;
        case 4:
                locate(4, 4); printf("%c", 254);
                locate(4, 6); printf("%c", 254);
                locate(8, 4); printf("%c", 254);
                locate(8, 6); printf("%c", 254);
            break;
        case 5:
                locate(4, 4); printf("%c", 254);
                locate(4, 6); printf("%c", 254);
                locate(8, 4); printf("%c", 254);
                locate(6, 5); printf("%c", 254);
                locate(8, 6); printf("%c", 254);
            break;
        case 6:
                locate(4, 4); printf("%c", 254);
                locate(4, 6); printf("%c", 254);
                locate(8, 4); printf("%c", 254);
                locate(4, 5); printf("%c", 254);
                locate(8, 5); printf("%c", 254);
                locate(8, 6); printf("%c", 254);
            break;
     }

}

        /// DADO 2
int Caras2(int n){
    int i;
    for (int i = 13; i < 20; i++) {
            locate(i, 3); printf("%c", 205);
            locate(i, 7); printf("%c", 205);
        }
        // VERTICAL
        for (int i = 4; i < 7; i++) {
            locate(12, i); printf("%c", 186);
            locate(20, i); printf("%c", 186);
        }
        //ESQUINAS
        locate(12, 3); printf("%c", 201);
        locate(12, 7); printf("%c", 200);
        locate(20, 3); printf("%c", 187);
        locate(20, 7); printf("%c", 188);

    switch(n){

        case 1:
                locate(16, 5); printf("%c", 254);
            break;
        case 2:
                locate(14, 4); printf("%c", 254);
                locate(18, 6); printf("%c", 254);

            break;
        case 3:
                locate(16, 5); printf("%c", 254);
                locate(18, 4); printf("%c", 254);
                locate(14, 6); printf("%c", 254);

            break;
        case 4:
                locate(14, 4); printf("%c", 254);
                locate(14, 6); printf("%c", 254);
                locate(18, 4); printf("%c", 254);
                locate(18, 6); printf("%c", 254);

            break;
        case 5:
                locate(14, 4); printf("%c", 254);
                locate(14, 6); printf("%c", 254);
                locate(18, 4); printf("%c", 254);
                locate(16, 5); printf("%c", 254);
                locate(18, 6); printf("%c", 254);

            break;
        case 6:
                locate(14, 4); printf("%c", 254);
                locate(14, 6); printf("%c", 254);
                locate(18, 4); printf("%c", 254);
                locate(14, 5); printf("%c", 254);
                locate(18, 5); printf("%c", 254);
                locate(18, 6); printf("%c", 254);

            break;
     }

}

        /// DADO 3
int Caras3(int n){

    // HORIZONTAL
    for (int i = 23; i < 30; i++) {
        locate(i, 3); printf("%c", 205);
        locate(i, 7); printf("%c", 205);
    }
    // VERTICAL
    for (int i = 4; i < 7; i++) {
        locate(22, i); printf("%c", 186);
        locate(30, i); printf("%c", 186);
    }
    //ESQUINAS
    locate(22, 3); printf("%c", 201);
    locate(22, 7); printf("%c", 200);
    locate(30, 3); printf("%c", 187);
    locate(30, 7); printf("%c", 188);

    switch (n){
        case 1:
                locate(26, 5); printf("%c", 254);
            break;
        case 2:
                locate(24, 4); printf("%c", 254);
                locate(28, 6); printf("%c", 254);
            break;
        case 3:
                locate(26, 5); printf("%c", 254);
                locate(28, 4); printf("%c", 254);
                locate(24, 6); printf("%c", 254);
            break;
        case 4:
                locate(24, 4); printf("%c", 254);
                locate(24, 6); printf("%c", 254);
                locate(28, 4); printf("%c", 254);
                locate(28, 6); printf("%c", 254);
            break;
        case 5:
                locate(24, 4); printf("%c", 254);
                locate(24, 6); printf("%c", 254);
                locate(28, 4); printf("%c", 254);
                locate(26, 5); printf("%c", 254);
                locate(28, 6); printf("%c", 254);
            break;
        case 6:
                locate(24, 4); printf("%c", 254);
                locate(24, 6); printf("%c", 254);
                locate(28, 4); printf("%c", 254);
                locate(24, 5); printf("%c", 254);
                locate(28, 5); printf("%c", 254);
                locate(28, 6); printf("%c", 254);
            break;

    }

}




