//
// Created by elise on 30/06/2020.
//

#ifndef GESTIONTRANSPORT_VEHICULE_H
#define GESTIONTRANSPORT_VEHICULE_H
#include <iostream>


class Vehicule
{
protected:
    std::string m_marque;
    std::string m_modele;
    int m_hauteur;

public:
    Vehicule(std::string marque, std::string modele, int hauteur);
    ~Vehicule();

};
#endif //GESTIONTRANSPORT_VEHICULE_H
