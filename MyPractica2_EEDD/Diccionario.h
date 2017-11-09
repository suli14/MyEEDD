/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Diccionario.h
 * Author: suli14
 *
 * Created on 9 de noviembre de 2017, 18:00
 */

#ifndef DICCIONARIO_H
#define DICCIONARIO_H

#include "VectorEstatico.h"

class Diccionario {
public:
    Diccionario( const std:: string &nomFichero );
    Diccionario(const Diccionario& orig);
    virtual ~Diccionario();
    
    bool busca( std::string &termino );
    
private:
    int _numPalabras;
    VectorEstatico* _palabras;

};

#endif /* DICCIONARIO_H */

