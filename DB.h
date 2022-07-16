//
// Created by kp on 11.07.2022.
//

#ifndef SUMMER2022_DB_H
#define SUMMER2022_DB_H

#include "Squad.h"
#include "CriminalList.h"

class DB {
    vector<Squad*> squads;


public:
    DB();

    vector<Squad*> getSquads();
    void addSquad(Squad* squad);

    CriminalList* find(string param, string val);
};


#endif //SUMMER2022_DB_H
