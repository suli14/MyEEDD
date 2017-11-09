/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VectorEstatico.cpp
 * Author: suli14
 * 
 * Created on 9 de noviembre de 2017, 18:22
 */

#include "VectorEstatico.h"

VectorEstatico::VectorEstatico():
    TAM( 80383 )
{
    _vectorE = new Palabra[ TAM ];
}

VectorEstatico::VectorEstatico(const VectorEstatico& orig):
    TAM( orig.TAM )
{
    for ( int i=0; i<TAM; i++ ) {
        _vectorE[i] = orig._vectorE[i];
    }
}

VectorEstatico::~VectorEstatico() {
    delete []_vectorE;
}

void VectorEstatico::insertar( const Palabra &nuevaPalabra, int pos ) {
    if ( pos < 0 )
        throw std::range_error( "[VectorEstatico.cpp]::insertar:"
                "Posicion no puede ser menor que 0." );
    if ( pos >= TAM )
        throw std::range_error( "[VectorEstatico.cpp]::insertar:"
                "Posicion no puede ser igual o mayor al tamanio maximo." );
    _vectorE[pos] = nuevaPalabra;
}

//int VectorEstatico::busquedaBin( const Palabra &aBuscar ) {
//    int inferior = 0;
//    int superior = TAM-1;
//    int posBuscada;
//    while ( inferior <= superior ) {
//        posBuscada = ( inferior + superior ) / 2;
//        if ( _vectorE[posBuscada].getTermino() < aBuscar.getTermino() )
//            inferior = posBuscada+1;
//        else
//            superior = posBuscada-1;
//    }
//    return -1;
//}

int VectorEstatico::busquedaBin( const Palabra& aBuscar, int inferior, int superior ) {
    int posBuscada;
    if ( inferior > superior ) 
        return -1;
    else {
        if ( inferior == superior ) {
            if ( aBuscar.getTermino() == _vectorE[inferior].getTermino() )
                return inferior;
            else 
                return -1;
        } else {
            posBuscada = ( inferior + superior ) / 2;
            if ( aBuscar.getTermino() == _vectorE[posBuscada].getTermino() ) 
                return posBuscada;
            else {
                if ( aBuscar.getTermino() < _vectorE[posBuscada].getTermino())
                    return busquedaBin( aBuscar, inferior, posBuscada-1 );
                else 
                    return busquedaBin( aBuscar, posBuscada+1, superior );
            }   
        }
    }
}
