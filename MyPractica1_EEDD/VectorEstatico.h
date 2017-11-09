/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VectorEstatico.h
 * Author: suli14
 *
 * Created on 9 de noviembre de 2017, 18:22
 */

#ifndef VECTORESTATICO_H
#define VECTORESTATICO_H

#include "Palabra.h"

class VectorEstatico {
public:
    VectorEstatico();
    VectorEstatico(const VectorEstatico& orig);
    virtual ~VectorEstatico();
    
    void insertar ( const Palabra &nuevaPalabra, int pos );
    int busquedaBin ( const Palabra &aBuscar, int inferior, int superior );
    
private:
    int TAM;
    Palabra* _vectorE;

};

#endif /* VECTORESTATICO_H */

