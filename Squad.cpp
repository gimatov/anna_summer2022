//
// Created by kp on 10.07.2022.
//

#include "Squad.h"

Squad::Squad() = default;

void Squad::addCriminal(Criminal *criminal) {
    this->criminals.push_back(criminal);
}

vector<Criminal *> Squad::gitCriminals() {
    return this->criminals;
}
