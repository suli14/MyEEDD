/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: suli14
 *
 * Created on 9 de noviembre de 2017, 17:05
 */

#include <cstdlib>
#include "Diccionario.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    try {
        std::cout << "Creando diccionario." << std::endl;
        Diccionario diccionario( "listado-general.txt" );
        std::cout << "Diccionario creado." << std::endl;
        do {
            std::string palabra;
            std::cout << "Escriba la palabra que desea buscar, -1 para salir:" << std::endl;
            cin >> palabra;
            if ( palabra == "-1" )
                return 0;
            if ( diccionario.busca( palabra ) )
                std::cout << palabra << " SI se encuentra en el diccionario." << std::endl;
            else 
                std::cout << palabra << " NO se encuentra en el diccionario." << endl;
            
        } while ( 1 );
        
    } catch ( std::string& exception ) {
        std::cerr << exception << std::endl;
    
    } catch ( std::invalid_argument& exception ) {
        std::cerr << exception.what() << std::endl;
        
    } catch ( std::range_error& exception ) {
        std::cerr << exception.what() << std::endl;
        
    } catch ( std::exception& exception ) {
        std::cerr << exception.what() << std::endl;
        
    }
   
    return 0;
}

