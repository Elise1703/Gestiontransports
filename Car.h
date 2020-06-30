//
// Created by elise on 30/06/2020.
//
#include <iostream>
#ifndef GESTIONTRANSPORT_CAR_H
#define GESTIONTRANSPORT_CAR_H

#include "Vehicule.h"

class Car : public Vehicule
{
protected:
    int m_placeassise;
    bool m_toilette;
    bool m_accueilpersonnagemobilitereduite;

public :
    Car(Vehicule car, int place, int toilette, int persoreduite);
    ~Car();
};
#endif //GESTIONTRANSPORT_CAR_H
