/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Palabra.h
 * Author: suli14
 *
 * Created on 9 de noviembre de 2017, 18:01
 */

#ifndef PALABRA_H
#define PALABRA_H

#include <iostream>

class Palabra {
public:
    Palabra( ):
        _termino( "" )
    {}
        
    Palabra( std::string termino ):
        _termino( termino )
    {}
    
    Palabra(const Palabra& orig):
        _termino( orig._termino )
    {}
    
    virtual ~Palabra() {
    }

    void setTermino(std::string termino) {
        this->_termino = termino;
    }

    std::string getTermino() const {
        return _termino;
    }
private:
    std::string _termino;

};

#endif /* PALABRA_H */

