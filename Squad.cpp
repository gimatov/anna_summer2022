//
// Created by kp on 10.07.2022.
//

#include "Squad.h"

Squad::Squad() {
    this->criminals = new vector<Criminal>;
}

void Squad::addCriminal(Criminal *criminal) {
    this->criminals->push_back(*criminal);
}
