//
// Created by kp on 16.07.2022.
//

#include "CriminalList.h"

#include <utility>

CriminalList::CriminalList(const vector<Squad *>& squads) {
    for (Squad* squad : squads) {
        for (Criminal* criminal : squad->gitCriminals()) {
            this->criminals.push_back(criminal);
        }
    }
}

CriminalList::CriminalList(vector<Criminal *> criminals) {
    this->criminals = std::move(criminals);
}

CriminalList *CriminalList::find(string param, string val) {
    vector<Criminal*> temp;

    for (Criminal* criminal : this->criminals) {
        if (criminal->eqValue(param, val)) {
            temp.push_back(criminal);
        }
    }

    return new CriminalList(temp);
}

vector<Criminal *> CriminalList::get() {
    return this->criminals;
}


