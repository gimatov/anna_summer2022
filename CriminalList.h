//
// Created by kp on 16.07.2022.
//

#ifndef SUMMER2022_CRIMINALLIST_H
#define SUMMER2022_CRIMINALLIST_H

#include "Criminal.h"
#include "Squad.h"

class CriminalList {
    vector<Criminal*> criminals;
public:
    explicit CriminalList(const vector<Squad*>& squads);
    explicit CriminalList(vector<Criminal*> criminals);
    CriminalList* find(string param, string val);
    vector<Criminal*> get();
};


#endif //SUMMER2022_CRIMINALLIST_H
