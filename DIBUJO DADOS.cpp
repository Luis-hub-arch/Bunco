#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
//#include "TestDados.h"
#include "rlutil.h"
#include "dado.h"
using namespace rlutil;

int main (){

    int i,j,n;
    int Dado[3]={1,2,3};


    DibujarDados();
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


 /*   cout<<"INGRESE UN NUMERO: ";cin>>n;

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

     // DADO 2
            // HORIZONTAL
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

    //DADO 3


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
     }*/
    getch();

    return 0;
}


