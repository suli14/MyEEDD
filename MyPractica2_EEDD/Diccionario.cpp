/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Diccionario.cpp
 * Author: suli14
 * 
 * Created on 9 de noviembre de 2017, 18:00
 */

#include <fstream>
#include "Diccionario.h"

Diccionario::Diccionario( const std::string &nomFichero ) {
    _numPalabras = 0;
    _palabras = new VectorEstatico( );
    
    std::ifstream fe;
    std::string pal;
    
    fe.open( nomFichero.c_str() );
    if ( fe.good() ) {
        while ( !fe.eof() ) {
            getline ( fe, pal );
            Palabra p( pal );
            _palabras->insertar( p, _numPalabras );
            _numPalabras++;
        }
    } else
        throw std::string( "[Diccionario.cpp]::constructor:"
                "El fichero no se ha leido correctamente." );
    
    fe.close( );
    
}

Diccionario::Diccionario(const Diccionario& orig) {
    throw std::string ( "[Diccionario.cpp]::constructorCopia:"
            "Cuidado, constructor copia no implementado." );
}

Diccionario::~Diccionario() {
}

bool Diccionario::busca(std::string &termino) {
    Palabra pal( termino );
    if ( _palabras->busquedaBin( pal, 0, _numPalabras ) == -1 )
        return false;
    else 
        return true;
}

