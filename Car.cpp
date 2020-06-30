//
// Created by elise on 30/06/2020.
//

#include "Car.h"

Car::Car(Vehicule car, int place, int toilette, int persoreduite): Vehicule("zo", "ze", 700), m_placeassise(place), m_toilette(toilette), m_accueilpersonnagemobilitereduite(persoreduite){}

Car::~Car();